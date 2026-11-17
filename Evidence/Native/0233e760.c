/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$SkuLabel
System_String_o* Dino_BusSand_App_Meta_GiftPackTrack__SkuLabel (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$SkuLabel
   System_String_o* Dino_BusSand_App_Meta_GiftPackTrack__SkuLabel (int32_t storeItemId, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackTrack__SkuLabel_223e760(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04caecb0;
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9beeb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb36f8);
    FUN_02132f7c(PTR_DAT_04cb3700);
    FUN_02132f7c(PTR_DAT_04caecb0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9beeb = 1;
  }
  uVar4 = Dino_BusSand_App_Meta_GiftPackTrack__Row_223e618(param_1);
  uVar5 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar4,*(undefined8 *)puVar2,0);
  lVar6 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar5,*(undefined8 *)puVar1,0);
  uVar7 = System_String__IsNullOrEmpty_46d2084(lVar6,0);
  puVar1 = PTR_DAT_04cb3700;
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)PTR_DAT_04cb36f8;
    if ((lVar8 == 0) || (iVar3 = *(int *)(lVar8 + 0x10), iVar3 == 0)) {
      if ((lVar6 == 0) || (lVar8 = lVar6, *(int *)(lVar6 + 0x10) == 0)) {
        lVar8 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
      }
    }
    else if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) {
      lVar9 = thunk_FUN_0216c29c(*(int *)(lVar6 + 0x10) + iVar3,lVar6,0);
      System_String__FillStringChecked_46d2a48(lVar9,0,lVar8);
      System_String__FillStringChecked_46d2a48(lVar9,iVar3,lVar6);
      lVar8 = lVar9;
    }
    return lVar8;
  }
  uVar4 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar4,*(undefined8 *)PTR_DAT_04cb3700,0);
  iVar3 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar4,0,0);
  lVar6 = *(long *)puVar1;
  if (iVar3 < 1) {
    lVar6 = 0;
  }
  return lVar6;
}

