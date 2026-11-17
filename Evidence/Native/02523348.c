/* IL2CPP: Dino.BusSand.Core.StageEngine$$RefreshHiddenReveals
void Dino_BusSand_Core_StageEngine__RefreshHiddenReveals (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$RefreshHiddenReveals
   void Dino_BusSand_Core_StageEngine__RefreshHiddenReveals (Dino_BusSand_Core_StageEngine_o*
   __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__RefreshHiddenReveals_2423348(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_c8;
  ulong auStack_b8 [2];
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9cbc0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8640);
    FUN_02132f7c(PTR_DAT_04cb8648);
    FUN_02132f7c(PTR_DAT_04cb8650);
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cb8658);
    FUN_02132f7c(PTR_DAT_04cbed88);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    bRam0000000004f9cbc0 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x60);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_58 = 0;
  if ((lVar8 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    if (*(int *)(lVar8 + 0x20) != *(int *)(*(long *)(param_1 + 0x68) + 0x20)) {
      System_Collections_Generic_HashSet_int___GetEnumerator_37dba74
                (&uStack_80,lVar8,*(undefined8 *)PTR_DAT_04cb8658);
      puVar5 = PTR_DAT_04cb8648;
      puVar4 = PTR_DAT_04cb58d0;
      puVar3 = PTR_DAT_04cae220;
      puVar2 = PTR_DAT_04cae218;
      puStack_a8 = &uStack_a0;
      uStack_98 = uStack_78;
      uStack_a0 = uStack_80;
      uStack_90 = uStack_70;
      auStack_b8[1] = 0;
      while (uVar9 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext_35ce43c
                               (&uStack_a0,*(undefined8 *)puVar5), uVar7 = uStack_90,
            (uVar9 & 1) != 0) {
        if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar6 = (undefined4)uStack_90;
        uVar9 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                          (*(long *)(param_1 + 0x68),uStack_90 & 0xffffffff,*(undefined8 *)puVar3);
        if (((uVar9 & 1) == 0) &&
           (uVar9 = Dino_BusSand_Core_StageEngine__IsColorHidden_2423ce8(param_1,uVar7 & 0xffffffff)
           , (uVar9 & 1) == 0)) {
          if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar9 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                            (*(long *)(param_1 + 0x28),uVar7 & 0xffffffff,&uStack_58);
          if ((uVar9 & 1) != 0) {
            if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            System_Collections_Generic_HashSet_int___Add_37dc0f0
                      (*(long *)(param_1 + 0x68),uVar7 & 0xffffffff,*(undefined8 *)puVar2);
            if (param_2 != 0) {
              auStack_b8[0] = 0;
              uStack_c8 = CONCAT44(uVar6,6);
              thunk_FUN_02134474(auStack_b8,0);
              lVar8 = *(long *)(param_2 + 0x10);
              lVar10 = *(long *)puVar4;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar1 = *(uint *)(param_2 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
                *(uint *)(param_2 + 0x18) = uVar1 + 1;
                *(ulong *)(lVar8 + 0x30) = auStack_b8[0];
                *(undefined8 *)(lVar8 + 0x28) = 0;
                *(undefined8 *)(lVar8 + 0x20) = uStack_c8;
                thunk_FUN_02134474((ulong *)(lVar8 + 0x30),0);
              }
              else {
                uStack_78 = 0;
                uStack_80 = uStack_c8;
                uStack_70 = auStack_b8[0];
                System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                          (param_2,&uStack_80,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_int___Dispose_35ce438
                (&uStack_a0,*(undefined8 *)PTR_DAT_04cb8640);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

