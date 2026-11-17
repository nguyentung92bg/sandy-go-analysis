/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$HandlePayProtectProgressUpdate
void Dino_BusSand_App_Meta_RacingRobotSession__HandlePayProtectProgressUpdate (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t playerProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02363d98) */
/* WARNING: Removing unreachable block (ram,0x02363da4) */
/* WARNING: Removing unreachable block (ram,0x02363db4) */
/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$HandlePayProtectProgressUpdate
   void Dino_BusSand_App_Meta_RacingRobotSession__HandlePayProtectProgressUpdate
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t playerProgress, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_RacingRobotSession__HandlePayProtectProgressUpdate_2262ba4
               (long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c048 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04cb44f8);
    FUN_02132f7c(PTR_DAT_04cb4500);
    FUN_02132f7c(PTR_DAT_04cb43f0);
    FUN_02132f7c(PTR_DAT_04cb4400);
    FUN_02132f7c(PTR_DAT_04cb4478);
    FUN_02132f7c(PTR_DAT_04cb4408);
    FUN_02132f7c(PTR_DAT_04cb4410);
    bRam0000000004f9c048 = 1;
  }
  puVar2 = PTR_DAT_04caa200;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) + -1 <= param_2) {
      if ((bRam0000000004f9c047 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb4460);
        FUN_02132f7c(PTR_DAT_04cb4468);
        FUN_02132f7c(PTR_DAT_04cb4470);
        FUN_02132f7c(PTR_DAT_04cb4588);
        FUN_02132f7c(PTR_DAT_04cb4478);
        FUN_02132f7c(PTR_DAT_04caa200);
        bRam0000000004f9c047 = 1;
      }
      uStack_68 = 0;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      System_Math__Max_4830fc8(0,param_2 + -1,0);
      puVar3 = PTR_DAT_04cb4588;
      puVar4 = PTR_DAT_04cb4468;
      puVar2 = PTR_DAT_04cb4460;
      if (*(long *)(param_1 + 0x28) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_68,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
        puStack_78 = (undefined8 *)0x0;
        puStack_70 = &uStack_68;
        uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_68,*(undefined8 *)puVar4);
        if ((uVar8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_68,*(undefined8 *)puVar2);
        if (*(long *)(param_1 + 0x48) != 0) {
          System_Collections_Generic_HashSet_object___Clear_37e59fc
                    (*(long *)(param_1 + 0x48),*(undefined8 *)puVar3);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar13 = *(undefined8 *)(param_1 + 0x48);
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb43f0);
    System_Collections_Generic_HashSet_object____ctor_37e5448
              (lVar7,uVar13,*(undefined8 *)PTR_DAT_04cb4500);
    puVar2 = PTR_DAT_04cb4478;
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_98,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
      puVar4 = PTR_DAT_04cb4468;
      puStack_78 = puStack_90;
      uStack_80 = uStack_98;
      puStack_70 = puStack_88;
      uStack_98 = 0;
      puStack_90 = &uStack_80;
      while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_80,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
        if (puStack_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((*(uint *)(puStack_70 + 0x14) | 2) == 3) {
          *(undefined4 *)(puStack_70 + 0x14) = 0;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_80,*(undefined8 *)PTR_DAT_04cb4460);
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4410);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)PTR_DAT_04cb4408);
      if (*(long *)(param_1 + 0x28) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_98,*(long *)(param_1 + 0x28),*(undefined8 *)puVar2);
        puVar5 = PTR_DAT_04cb44f8;
        puVar3 = PTR_DAT_04cb4400;
        puStack_78 = puStack_90;
        uStack_80 = uStack_98;
        puStack_70 = puStack_88;
        uStack_98 = 0;
        puStack_90 = &uStack_80;
LAB_02362dac:
        uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_80,*(undefined8 *)puVar4);
        puVar6 = puStack_70;
        if ((uVar8 & 1) != 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar8 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                            (lVar7,puStack_70,*(undefined8 *)puVar5);
          if ((uVar8 & 1) == 0) {
            if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (param_2 <= *(int *)((long)puVar6 + 0x9c)) {
              *(undefined4 *)(puVar6 + 0x14) = 1;
              goto LAB_02362dac;
            }
          }
          else if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(int *)(puVar6 + 0x14) == 2) {
            *(undefined4 *)(puVar6 + 0x14) = 0;
          }
          if (lVar9 == 0) {
LAB_02362f3c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar11 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)puVar3;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_02362f3c;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar10 = puVar6;
            thunk_FUN_02134474(puVar10,puVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar9,puVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_02362dac;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cb4460);
        Dino_BusSand_App_Meta_RacingRobotSession__ReselectCompeting_22640b4
                  (param_1,lVar9,param_2,lVar7);
        if (lVar9 != 0) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_98,lVar9,*(undefined8 *)puVar2);
          puStack_70 = puStack_88;
          puStack_78 = puStack_90;
          uStack_80 = uStack_98;
          uStack_98 = 0;
          puStack_90 = &uStack_80;
          while( true ) {
            uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_80,*(undefined8 *)puVar4);
            puVar6 = puStack_70;
            if ((uVar8 & 1) == 0) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_80,*(undefined8 *)PTR_DAT_04cb4460);
                    /* try { // try from 02362f30 to 02463047 has its CatchHandler @ 02362f30
                       catch() { ... } // from try @ 02362f30 with catch @ 02362f30
                       catch() { ... } // from try @ 02363094 with catch @ 02362f30
                       catch() { ... } // from try @ 023630c8 with catch @ 02362f30
                       catch() { ... } // from try @ 023630fc with catch @ 02362f30
                       catch() { ... } // from try @ 02363120 with catch @ 02362f30 */
              return;
            }
            if (*(long *)(param_1 + 0x48) == 0) break;
            uVar8 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                              (*(long *)(param_1 + 0x48),puStack_70,*(undefined8 *)puVar5);
            if ((uVar8 & 1) == 0) {
              if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (param_2 < *(int *)((long)puVar6 + 0x9c)) {
                *(undefined4 *)(puVar6 + 0x14) = 2;
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

