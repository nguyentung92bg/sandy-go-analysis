/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$PaiziTexts
void Dino_BusSand_App_UI_EndOfLevelRules__PaiziTexts (Dino_BusSand_App_UI_EndOfLevelRules_PaiziInfo_o p, System_String_o** rateNum, System_String_o** centerNum, System_String_o** bottomItemNum, System_String_o** bottomStreakNum, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EndOfLevelRules$$PaiziTexts
   void Dino_BusSand_App_UI_EndOfLevelRules__PaiziTexts
   (Dino_BusSand_App_UI_EndOfLevelRules_PaiziInfo_o p, System_String_o** rateNum, System_String_o**
   centerNum, System_String_o** bottomItemNum, System_String_o** bottomStreakNum, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_EndOfLevelRules__PaiziTexts_22c2990
               (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9c33f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c33f = 1;
  }
  uVar3 = *(undefined8 *)puVar2;
  *param_5 = uVar3;
  thunk_FUN_02134474(param_5,uVar3);
  *param_4 = uVar3;
  thunk_FUN_02134474(param_4,uVar3);
  *param_3 = uVar3;
  thunk_FUN_02134474(param_3,uVar3);
  *param_2 = uVar3;
  thunk_FUN_02134474(param_2,uVar3);
  iVar1 = *param_1;
  if (iVar1 == 3) {
    uVar3 = System_Int32__ToString_482d750(param_1 + 4,0);
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar3,0);
    *param_3 = uVar3;
  }
  else if (iVar1 == 2) {
    uVar3 = System_Int32__ToString_482d750(param_1 + 3,0);
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar3,0);
    *param_2 = uVar3;
    param_3 = param_2;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    uVar3 = System_Int32__ToString_482d750(param_1 + 3,0);
    puVar2 = PTR_DAT_04cabb10;
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabb10,uVar3,0);
    *param_2 = uVar3;
    thunk_FUN_02134474(param_2,uVar3);
    uVar3 = System_Int32__ToString_482d750(param_1 + 3,0);
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar3,0);
    *param_4 = uVar3;
    thunk_FUN_02134474(param_4,uVar3);
    uVar3 = System_Int32__ToString_482d750(param_1 + 4,0);
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar3,0);
    *param_5 = uVar3;
    param_3 = param_5;
  }
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)param_3 >> 0xc & 0x3f),
                 ((ulong)param_3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

