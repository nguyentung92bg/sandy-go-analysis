/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$DiscountText
System_String_o* Dino_BusSand_App_UI_GiftPackUi__DiscountText (System_String_o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackUi$$DiscountText
   System_String_o* Dino_BusSand_App_UI_GiftPackUi__DiscountText (System_String_o* d, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_GiftPackUi__DiscountText_21a96c0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04caecd0;
  puVar2 = PTR_DAT_04caecc8;
  if ((bRam0000000004f9ba6d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caecc8);
    FUN_02132f7c(PTR_DAT_04caecd0);
    bRam0000000004f9ba6d = 1;
  }
  lVar4 = *(long *)puVar2;
  lVar7 = *(long *)puVar3;
  lVar5 = param_1;
  lVar6 = lVar7;
  if (((((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != 0)) && (lVar5 = lVar4, param_1 != 0)) &&
      ((*(int *)(param_1 + 0x10) != 0 && (lVar6 = param_1, lVar7 != 0)))) &&
     (*(int *)(lVar7 + 0x10) != 0)) {
    lVar5 = thunk_FUN_0216c29c(*(int *)(param_1 + 0x10) + *(int *)(lVar4 + 0x10) +
                               *(int *)(lVar7 + 0x10),param_1,lVar7,0);
    System_String__FillStringChecked_46d2a48(lVar5,0,lVar4);
    System_String__FillStringChecked_46d2a48(lVar5,*(undefined4 *)(lVar4 + 0x10),param_1);
    System_String__FillStringChecked_46d2a48
              (lVar5,*(int *)(param_1 + 0x10) + *(int *)(lVar4 + 0x10),lVar7);
    return lVar5;
  }
  if ((lVar5 == 0) || (iVar1 = *(int *)(lVar5 + 0x10), iVar1 == 0)) {
    if ((lVar6 == 0) || (lVar5 = lVar6, *(int *)(lVar6 + 0x10) == 0)) {
      lVar5 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
    }
  }
  else if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) {
    lVar4 = thunk_FUN_0216c29c(*(int *)(lVar6 + 0x10) + iVar1,lVar6,lVar7,0);
    System_String__FillStringChecked_46d2a48(lVar4,0,lVar5);
    System_String__FillStringChecked_46d2a48(lVar4,iVar1,lVar6);
    lVar5 = lVar4;
  }
  return lVar5;
}

