/* IL2CPP: Dino.BusSand.Core.Road$$ReleaseChain
void Dino_BusSand_Core_Road__ReleaseChain (Dino_BusSand_Core_Road_o* __this, int32_t chain, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$ReleaseChain
   void Dino_BusSand_Core_Road__ReleaseChain (Dino_BusSand_Core_Road_o* __this, int32_t chain,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_Road__ReleaseChain_2415efc(long param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  if ((bRam0000000004f9cb61 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbe5f0);
    bRam0000000004f9cb61 = 1;
  }
  puVar5 = PTR_DAT_04cbe5f0;
  puVar4 = PTR_DAT_04cb58d0;
  puVar3 = PTR_DAT_04cb1898;
  puVar2 = PTR_DAT_04cb1890;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_70,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_04cbe5f0);
    iVar9 = 0;
    lStack_80 = lStack_60;
    puStack_88 = puStack_68;
    uStack_90 = uStack_70;
    uStack_70 = 0;
    puStack_68 = &uStack_90;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_90,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((*(int *)(lStack_80 + 0x5c) == param_2) && (*(int *)(lStack_80 + 0x28) == 1)) {
        iVar9 = iVar9 + 1;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_90,*(undefined8 *)puVar2);
    uStack_a8 = 0;
    puStack_a0 = (undefined8 *)0x0;
    lStack_98 = 0;
    Dino_BusSand_Core_SimEvent___ctor_241dc50(&uStack_a8,0x22,param_2,iVar9,0,0);
    if (param_3 != 0) {
      lVar7 = *(long *)(param_3 + 0x10);
      lVar8 = *(long *)puVar4;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x18;
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          *(long *)(lVar7 + 0x30) = lStack_98;
          *(undefined8 **)(lVar7 + 0x28) = puStack_a0;
          *(undefined8 *)(lVar7 + 0x20) = uStack_a8;
          thunk_FUN_02134474((long *)(lVar7 + 0x30),0);
        }
        else {
          puStack_68 = puStack_a0;
          uStack_70 = uStack_a8;
          lStack_60 = lStack_98;
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (param_3,&uStack_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_70,*(long *)(param_1 + 0x50),*(undefined8 *)puVar5);
          lStack_80 = lStack_60;
          puStack_88 = puStack_68;
          uStack_90 = uStack_70;
          while( true ) {
            uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_90,*(undefined8 *)puVar3);
            lVar7 = lStack_80;
            if ((uVar6 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_90,*(undefined8 *)puVar2);
              return;
            }
            if (lStack_80 == 0) break;
            if ((*(int *)(lStack_80 + 0x5c) == param_2) && (*(int *)(lStack_80 + 0x28) == 1)) {
              Dino_BusSand_Core_Road__Complete_2415be0(param_1,lStack_80,param_3);
              uVar6 = Dino_BusSand_Core_Road__AtExitBranch_24162d0(param_1,lVar7);
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = Dino_BusSand_Core_Road__TrainMayExit_2416398(param_1,lVar7),
                 (uVar6 & 1) != 0)) {
                *(undefined4 *)(lVar7 + 0x28) = 3;
                uStack_a8 = 0;
                puStack_a0 = (undefined8 *)0x0;
                lStack_98 = 0;
                Dino_BusSand_Core_SimEvent___ctor_241dc50
                          (&uStack_a8,0xd,*(undefined4 *)(lVar7 + 0x10),0,0,0);
                lVar7 = *(long *)(param_3 + 0x10);
                lVar8 = *(long *)puVar4;
                *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                uVar1 = *(uint *)(param_3 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  lVar7 = lVar7 + (long)(int)uVar1 * 0x18;
                  *(uint *)(param_3 + 0x18) = uVar1 + 1;
                  *(long *)(lVar7 + 0x30) = lStack_98;
                  *(undefined8 **)(lVar7 + 0x28) = puStack_a0;
                  *(undefined8 *)(lVar7 + 0x20) = uStack_a8;
                  thunk_FUN_02134474((long *)(lVar7 + 0x30),0);
                }
                else {
                  puStack_68 = puStack_a0;
                  uStack_70 = uStack_a8;
                  lStack_60 = lStack_98;
                  System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                            (param_3,&uStack_70,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

