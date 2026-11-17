/* IL2CPP: Dino.BusSand.View.VehicleView$$SlotName
System_String_o* Dino_BusSand_View_VehicleView__SlotName (Dino_BusSand_ModelEntry_o* m, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d48ac) */
/* IL2CPP: Dino.BusSand.View.VehicleView$$SlotName
   System_String_o* Dino_BusSand_View_VehicleView__SlotName (Dino_BusSand_ModelEntry_o* m, int32_t
   i, const MethodInfo* method); */

long Dino_BusSand_View_VehicleView__SlotName_23f9d94(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar6;
  
  if ((bRam0000000004f9cad1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cad1 = 1;
  }
  if (param_1 != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    plVar9 = (long *)PTR_DAT_04ca9c30;
    if ((lVar8 != 0) && ((int)param_2 < (int)*(uint *)(lVar8 + 0x18))) {
      if (*(uint *)(lVar8 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar9 = (long *)(lVar8 + (long)(int)param_2 * 8 + 0x20);
    }
    lVar8 = *plVar9;
    if (lVar8 != 0) {
      iVar2 = System_String__IndexOf_46d72c4(lVar8,0x2e,0);
      if (iVar2 < 1) {
        return lVar8;
      }
      iVar1 = *(int *)(lVar8 + 0x10);
      if (iVar1 < 0) {
        thunk_FUN_021985a8(PTR_DAT_04cbe6f8,0,iVar2,0);
        uVar3 = thunk_FUN_0216e89c();
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cbfe80);
        puVar6 = PTR_DAT_04d0b4a0;
      }
      else if (iVar2 < 0) {
        thunk_FUN_021985a8(PTR_DAT_04cbe6f8,0,iVar2,0);
        uVar3 = thunk_FUN_0216e89c();
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
        puVar6 = PTR_DAT_04d0b310;
      }
      else {
        if (-1 < iVar1 - iVar2) {
          if (iVar2 == 0) {
            lVar8 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
          }
          else if (iVar1 != iVar2) {
            lVar7 = thunk_FUN_0216c29c(iVar2);
            if (lVar7 != 0) {
              System_Buffer__Memmove_485a338(lVar7 + 0x14,lVar8 + 0x14,iVar2 << 1,0);
              return lVar7;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          return lVar8;
        }
        thunk_FUN_021985a8(PTR_DAT_04cbe6f8,0,iVar2,0);
        uVar3 = thunk_FUN_0216e89c();
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
        puVar6 = PTR_DAT_04d0b4a8;
      }
      uVar5 = thunk_FUN_021985a8(puVar6);
      System_ArgumentOutOfRangeException___ctor_47b3440(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_021985a8(PTR_DAT_04d0b4b0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar3,uVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

