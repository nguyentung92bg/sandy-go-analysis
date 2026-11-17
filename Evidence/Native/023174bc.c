/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PackName
System_String_o* Dino_BusSand_App_Meta_GameTracking__PackName (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PackName
   System_String_o* Dino_BusSand_App_Meta_GameTracking__PackName (int32_t storeItemId, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_GameTracking__PackName_22174bc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar13;
  undefined4 uStack_24;
  undefined *puVar12;
  
  puVar12 = PTR_DAT_04cac018;
  uStack_24 = param_1;
  if ((bRam0000000004f9bd5f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2508);
    FUN_02132f7c(PTR_DAT_04cad2a8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9bd5f = 1;
  }
  puVar5 = PTR_DAT_04cad2a8;
  puVar4 = PTR_DAT_04cad200;
  puVar3 = PTR_DAT_04ca9c30;
  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,param_1,0);
  uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)puVar5,0);
  lVar8 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar7,*(undefined8 *)puVar3,0);
  uVar9 = System_String__IsNullOrEmpty_46d2084(lVar8,0);
  puVar12 = PTR_DAT_04cb2508;
  if ((uVar9 & 1) == 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar6 = System_String__LastIndexOf_46d7e20(lVar8,0x2e,0);
    if ((-1 < iVar6) && (iVar6 < *(int *)(lVar8 + 0x10) + -1)) {
      iVar6 = iVar6 + 1;
      iVar2 = *(int *)(lVar8 + 0x10) - iVar6;
      if (iVar6 < 0) {
        thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
        uVar7 = thunk_FUN_0216e89c();
        uVar10 = thunk_FUN_021985a8(PTR_DAT_04cbfe80);
        puVar12 = PTR_DAT_04d0b378;
      }
      else {
        iVar1 = *(int *)(lVar8 + 0x10);
        if (iVar1 < iVar6) {
          thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
          uVar7 = thunk_FUN_0216e89c();
          uVar10 = thunk_FUN_021985a8(PTR_DAT_04cbfe80);
          puVar12 = PTR_DAT_04d0b4a0;
        }
        else if (iVar2 < 0) {
          thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
          uVar7 = thunk_FUN_0216e89c();
          uVar10 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
          puVar12 = PTR_DAT_04d0b310;
        }
        else {
          if (iVar6 <= iVar1 - iVar2) {
            if (iVar2 == 0) {
              lVar8 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
            }
            else if ((iVar6 != 0) || (iVar1 != iVar2)) {
              lVar13 = thunk_FUN_0216c29c(iVar2);
              if (lVar13 != 0) {
                System_Buffer__Memmove_485a338
                          (lVar13 + 0x14,lVar8 + (long)iVar6 * 2 + 0x14,iVar2 * 2,0);
                return lVar13;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            return lVar8;
          }
          thunk_FUN_021985a8(PTR_DAT_04cbe6f8);
          uVar7 = thunk_FUN_0216e89c();
          uVar10 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
          puVar12 = PTR_DAT_04d0b4a8;
        }
      }
      uVar11 = thunk_FUN_021985a8(puVar12);
      System_ArgumentOutOfRangeException___ctor_47b3440(uVar7,uVar10,uVar11,0);
      uVar10 = thunk_FUN_021985a8(PTR_DAT_04d0b4b0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar7,uVar10);
    }
  }
  else {
    uVar7 = System_Int32__ToString_482d750(&uStack_24,0);
    lVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar12,uVar7,0);
  }
  return lVar8;
}

