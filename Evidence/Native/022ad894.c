/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$TimeItemText
System_String_o* Dino_BusSand_App_UI_GiftPackUi__TimeItemText (int64_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$TimeItemText
   System_String_o* Dino_BusSand_App_UI_GiftPackUi__TimeItemText (int64_t seconds, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GiftPackUi__TimeItemText_21ad894(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if ((bRam0000000004f9ba6e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab3a8);
    FUN_02132f7c(PTR_DAT_04caef20);
    FUN_02132f7c(PTR_DAT_04caef28);
    FUN_02132f7c(PTR_DAT_04cacdd0);
    bRam0000000004f9ba6e = 1;
  }
  puVar4 = PTR_DAT_04ca9ac8;
  lStack_28 = param_1 / 0xe10;
  lVar8 = param_1 % 0x3c;
  iVar2 = (int)param_1 + (int)lStack_28 * -0xe10;
  iVar3 = (int)(short)iVar2;
  uVar1 = iVar2 + ((uint)(iVar3 * -0x7777) >> 0x10);
  lStack_40 = (long)(int)(((int)(uVar1 * 0x10000) >> 0x15) + ((uVar1 & 0x8000) >> 0xf));
  lStack_38 = lVar8;
  lStack_30 = lStack_40;
  if (param_1 < 0xe10) {
    if (iVar3 < 0x3c) {
      uVar5 = System_Int64__ToString_482e7e4(&lStack_38,0);
      puVar7 = (undefined8 *)PTR_DAT_04cacdd0;
    }
    else {
      if (0 < lVar8) {
        uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_40);
        lStack_48 = lVar8;
        uVar6 = FUN_02133100(*(undefined8 *)(puVar4 + 0x68),&lStack_48);
        System_String__Format_46d34e8(*(undefined8 *)PTR_DAT_04caef20,uVar5,uVar6,0);
        return;
      }
      uVar5 = System_Int64__ToString_482e7e4(&lStack_30,0);
      puVar7 = (undefined8 *)PTR_DAT_04caef28;
    }
  }
  else {
    uVar5 = System_Int64__ToString_482e7e4(&lStack_28,0);
    puVar7 = (undefined8 *)PTR_DAT_04cab3a8;
    if (0x3b < iVar3) {
      uVar6 = System_Int64__ToString_482e7e4(&lStack_30,0);
      System_String__Concat_46d30e8
                (uVar5,*(undefined8 *)PTR_DAT_04cab3a8,uVar6,*(undefined8 *)PTR_DAT_04caef28,0);
      return;
    }
  }
  System_String__Concat_46c82e0(uVar5,*puVar7,0);
  return;
}

