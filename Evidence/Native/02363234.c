/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$OnPlayerSpend
void Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerSpend (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, float amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$OnPlayerSpend
   void Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerSpend
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, float amount, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__OnPlayerSpend_2263234(float param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if (*(char *)(param_2 + 0x6d) == '\0') {
    lVar11 = *(long *)(param_2 + 0x30);
    fVar16 = *(float *)(param_2 + 0x54) + param_1;
    *(float *)(param_2 + 0x54) = fVar16;
    if (lVar11 != 0) {
      iVar1 = *(int *)(param_2 + 0x10);
      if (iVar1 == 3) {
        *(float *)(lVar11 + 0x1c) = *(float *)(lVar11 + 0x1c) + param_1;
      }
      else if (iVar1 == 2) {
        *(float *)(lVar11 + 0x18) = *(float *)(lVar11 + 0x18) + param_1;
      }
      else if (iVar1 == 1) {
        *(float *)(lVar11 + 0x14) = *(float *)(lVar11 + 0x14) + param_1;
      }
    }
    if ((*(char *)(param_2 + 0x6c) == '\0') && (*(float *)(param_2 + 0x58) <= fVar16)) {
      *(undefined1 *)(param_2 + 0x6c) = 1;
      Dino_BusSand_App_Meta_RacingRobotSession__TriggerPayProtect_22632d8(param_2);
      if ((bRam0000000004f9c043 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb4460);
        FUN_02132f7c(PTR_DAT_04cb4468);
        FUN_02132f7c(PTR_DAT_04cb4470);
        FUN_02132f7c(PTR_DAT_04caa160);
        FUN_02132f7c(PTR_DAT_04caea20);
        FUN_02132f7c(PTR_DAT_04cb4478);
        FUN_02132f7c(PTR_DAT_04caa188);
        FUN_02132f7c(PTR_DAT_04cb4480);
        FUN_02132f7c(PTR_DAT_04cb4458);
        FUN_02132f7c(PTR_DAT_04caa1c8);
        FUN_02132f7c(PTR_DAT_04caeb08);
        bRam0000000004f9c043 = 1;
      }
      puVar4 = PTR_DAT_04caa1c8;
      puVar3 = PTR_DAT_04caa188;
      lVar11 = *(long *)(param_2 + 0x30);
      uStack_60 = 0;
      puStack_58 = (undefined8 *)0x0;
      lStack_50 = 0;
      if (lVar11 == 0) {
        return;
      }
      if (*(long *)(param_2 + 0x28) != 0) {
        uVar15 = *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x18);
        uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
        System_Collections_Generic_List_int____ctor_3a2b854(uVar7,uVar15,*(undefined8 *)puVar3);
        puVar14 = (undefined8 *)(lVar11 + 0x30);
        *puVar14 = uVar7;
        thunk_FUN_02134474(puVar14,uVar7);
        if (*(long *)(param_2 + 0x28) != 0) {
          lVar11 = *(long *)(param_2 + 0x30);
          uVar15 = *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x18);
          uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
          System_Collections_Generic_List_int____ctor_3a2b854(uVar7,uVar15,*(undefined8 *)puVar3);
          if (lVar11 != 0) {
            puVar14 = (undefined8 *)(lVar11 + 0x38);
            *puVar14 = uVar7;
            thunk_FUN_02134474(puVar14,uVar7);
            puVar3 = PTR_DAT_04cb4480;
            if (*(long *)(param_2 + 0x28) != 0) {
              lVar11 = *(long *)(param_2 + 0x30);
              uVar15 = *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x18);
              uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caeb08);
              System_Collections_Generic_List_float____ctor_3ac20a4
                        (uVar7,uVar15,*(undefined8 *)puVar3);
              if (lVar11 != 0) {
                puVar14 = (undefined8 *)(lVar11 + 0x40);
                *puVar14 = uVar7;
                thunk_FUN_02134474(puVar14,uVar7);
                puVar6 = PTR_DAT_04cb4468;
                puVar5 = PTR_DAT_04cb4460;
                puVar4 = PTR_DAT_04caea20;
                puVar3 = PTR_DAT_04caa160;
                if (*(long *)(param_2 + 0x28) != 0) {
                  System_Collections_Generic_List_object___GetEnumerator_3a825f0
                            (&uStack_78,*(long *)(param_2 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
                  lStack_50 = lStack_68;
                  puStack_58 = puStack_70;
                  uStack_60 = uStack_78;
                  uStack_78 = 0;
                  puStack_70 = &uStack_60;
                  while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                           (&uStack_60,*(undefined8 *)puVar6), lVar11 = lStack_50,
                        (uVar8 & 1) != 0) {
                    lVar10 = *(long *)(param_2 + 0x30);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    if ((*(long *)(lStack_50 + 0x10) == 0) ||
                       (lVar9 = *(long *)(lVar10 + 0x30), lVar9 == 0)) {
LAB_0236116c:
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    lVar12 = *(long *)(lVar9 + 0x10);
                    uVar15 = *(undefined4 *)(*(long *)(lStack_50 + 0x10) + 0x10);
                    lVar13 = *(long *)puVar3;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_0236116c;
                    uVar2 = *(uint *)(lVar9 + 0x18);
                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                      *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = uVar15;
                    }
                    else {
                      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                (lVar9,uVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                      ;
                      lVar10 = *(long *)(param_2 + 0x30);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                    }
                    lVar9 = *(long *)(lVar10 + 0x38);
                    if (lVar9 == 0) {
LAB_02361170:
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    lVar12 = *(long *)(lVar9 + 0x10);
                    uVar15 = *(undefined4 *)(lVar11 + 0x9c);
                    lVar13 = *(long *)puVar3;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_02361170;
                    uVar2 = *(uint *)(lVar9 + 0x18);
                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                      *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = uVar15;
                    }
                    else {
                      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                (lVar9,uVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                      ;
                      lVar10 = *(long *)(param_2 + 0x30);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                    }
                    lVar10 = *(long *)(lVar10 + 0x40);
                    if (lVar10 == 0) {
LAB_02361174:
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    lVar9 = *(long *)(lVar10 + 0x10);
                    uVar15 = *(undefined4 *)(lVar11 + 0xb0);
                    lVar11 = *(long *)puVar4;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_02361174;
                    uVar2 = *(uint *)(lVar10 + 0x18);
                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                      *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar15;
                    }
                    else {
                      System_Collections_Generic_List_float___AddWithResize_3ac28c0
                                (lVar10,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                            (&uStack_60,*(undefined8 *)puVar5);
                  lVar11 = *(long *)(param_2 + 0x30);
                  if (lVar11 != 0) {
                    *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)(param_2 + 0x84);
                    *(undefined1 *)(lVar11 + 0x48) = *(undefined1 *)(param_2 + 0x6c);
                    return;
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

