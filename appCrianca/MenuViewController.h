
//
//  MenuViewController.h
//  appCrianca
//
//  Created by Alessandro Camillo Gimenez de Menezes on 31/03/14.
//  Copyright (c) 2014 RAFAEL CARDOSO DA SILVA. All rights reserved.
//

#import "ControlaViewController.h"


@interface MenuViewController : ControlaViewController

//@property UIButton *buttonFase1;
//@property UIButton *buttonFase2;
//@property UIButton *buttonFase3;
//@property UIButton *buttonFase4;
//@property UIButton *buttonFase5;

@property NSMutableArray* estrelas;
- (IBAction)goBack:(id)sender;


@property (strong, nonatomic) IBOutlet UILabel *lblTitle;

@property (strong, nonatomic) IBOutlet UIButton *buttonFase1;
@property (strong, nonatomic) IBOutlet UIButton *buttonFase2;
@property (strong, nonatomic) IBOutlet UIButton *buttonFase3;
@property (strong, nonatomic) IBOutlet UIButton *buttonFase4;
@property (strong, nonatomic) IBOutlet UIButton *buttonFase5;


@end


