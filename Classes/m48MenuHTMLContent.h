/*
 *  m48MenuHTMLContent.h
 *
 *  This file is part of m48
 *
 *  Copyright (C) 2009 Markus Gonser, m48@mksg.de
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 * 
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#import <UIKit/UIKit.h>


@interface m48MenuHTMLContent : UIViewController <UIWebViewDelegate> {
	UIWebView * _webView;
	NSURL *		_url;
	NSString *	_localSource;
}

- (id) initWithTitle:(NSString *)title filename:(NSString *)filename URL:(NSURL *)url;

@property (nonatomic, retain) UIWebView * webView;
@property (nonatomic, retain) NSURL * url;
@property (nonatomic, retain) NSString * localSource;

@end
