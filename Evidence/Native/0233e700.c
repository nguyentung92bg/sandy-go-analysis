/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$SkuTypeOf
System_String_o* Dino_BusSand_App_Meta_GiftPackTrack__SkuTypeOf (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$SkuTypeOf
   System_String_o* Dino_BusSand_App_Meta_GiftPackTrack__SkuTypeOf (int32_t storeItemId, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_GiftPackTrack__SkuTypeOf_223e700(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04cad270;
  if ((bRam0000000004f9beea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad270);
    bRam0000000004f9beea = 1;
  }
  uVar3 = Dino_BusSand_App_Meta_GiftPackTrack__Row_223e618(param_1);
  uVar3 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar3,*(undefined8 *)puVar1,0);
  iVar2 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar3,0,0);
  if ((bRam0000000004f9bee7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb36b0);
    FUN_02132f7c(PTR_DAT_04cb36b8);
    FUN_02132f7c(PTR_DAT_04cb36c0);
    FUN_02132f7c(PTR_DAT_04cb36c8);
    FUN_02132f7c(PTR_DAT_04cb36d0);
    FUN_02132f7c(PTR_DAT_04cb2108);
    FUN_02132f7c(PTR_DAT_04cb36d8);
    FUN_02132f7c(PTR_DAT_04cb36e0);
    FUN_02132f7c(PTR_DAT_04cb0240);
    FUN_02132f7c(PTR_DAT_04cb36e8);
    FUN_02132f7c(PTR_DAT_04cb36f0);
    bRam0000000004f9bee7 = 1;
  }
  puVar4 = (undefined8 *)PTR_DAT_04cb36e8;
  if (iVar2 - 1U < 10) {
    puVar4 = *(undefined8 **)(&UNK_049bb7b0 + (ulong)(iVar2 - 1U) * 8);
  }
  return *puVar4;
}

