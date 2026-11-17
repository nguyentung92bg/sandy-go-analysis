/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$SaveSnapshot
void Dino_BusSand_App_Meta_RacingRobotSession__SaveSnapshot (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$SaveSnapshot
   void Dino_BusSand_App_Meta_RacingRobotSession__SaveSnapshot
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__SaveSnapshot_2260e0c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
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
  puVar3 = PTR_DAT_04caa1c8;
  puVar2 = PTR_DAT_04caa188;
  lVar12 = *(long *)(param_1 + 0x30);
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  if (lVar12 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar14 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b854(uVar6,uVar14,*(undefined8 *)puVar2);
    puVar13 = (undefined8 *)(lVar12 + 0x30);
    *puVar13 = uVar6;
    thunk_FUN_02134474(puVar13,uVar6);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar12 = *(long *)(param_1 + 0x30);
      uVar14 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Collections_Generic_List_int____ctor_3a2b854(uVar6,uVar14,*(undefined8 *)puVar2);
      if (lVar12 != 0) {
        puVar13 = (undefined8 *)(lVar12 + 0x38);
        *puVar13 = uVar6;
        thunk_FUN_02134474(puVar13,uVar6);
        puVar2 = PTR_DAT_04cb4480;
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar12 = *(long *)(param_1 + 0x30);
          uVar14 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caeb08);
          System_Collections_Generic_List_float____ctor_3ac20a4(uVar6,uVar14,*(undefined8 *)puVar2);
          if (lVar12 != 0) {
            puVar13 = (undefined8 *)(lVar12 + 0x40);
            *puVar13 = uVar6;
            thunk_FUN_02134474(puVar13,uVar6);
            puVar5 = PTR_DAT_04cb4468;
            puVar4 = PTR_DAT_04cb4460;
            puVar3 = PTR_DAT_04caea20;
            puVar2 = PTR_DAT_04caa160;
            if (*(long *)(param_1 + 0x28) != 0) {
              System_Collections_Generic_List_object___GetEnumerator_3a825f0
                        (&uStack_78,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
              lStack_50 = lStack_68;
              puStack_58 = puStack_70;
              uStack_60 = uStack_78;
              uStack_78 = 0;
              puStack_70 = &uStack_60;
              while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                       (&uStack_60,*(undefined8 *)puVar5), lVar12 = lStack_50,
                    (uVar7 & 1) != 0) {
                lVar9 = *(long *)(param_1 + 0x30);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                if ((*(long *)(lStack_50 + 0x10) == 0) ||
                   (lVar8 = *(long *)(lVar9 + 0x30), lVar8 == 0)) {
LAB_0236116c:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar10 = *(long *)(lVar8 + 0x10);
                uVar14 = *(undefined4 *)(*(long *)(lStack_50 + 0x10) + 0x10);
                lVar11 = *(long *)puVar2;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_0236116c;
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar14;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize_3a2c06c
                            (lVar8,uVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(param_1 + 0x30);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                }
                lVar8 = *(long *)(lVar9 + 0x38);
                if (lVar8 == 0) {
LAB_02361170:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar10 = *(long *)(lVar8 + 0x10);
                uVar14 = *(undefined4 *)(lVar12 + 0x9c);
                lVar11 = *(long *)puVar2;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_02361170;
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar14;
                }
                else {
                  System_Collections_Generic_List_int___AddWithResize_3a2c06c
                            (lVar8,uVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  lVar9 = *(long *)(param_1 + 0x30);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                }
                lVar9 = *(long *)(lVar9 + 0x40);
                if (lVar9 == 0) {
LAB_02361174:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar8 = *(long *)(lVar9 + 0x10);
                uVar14 = *(undefined4 *)(lVar12 + 0xb0);
                lVar12 = *(long *)puVar3;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar8 == 0) goto LAB_02361174;
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar14;
                }
                else {
                  System_Collections_Generic_List_float___AddWithResize_3ac28c0
                            (lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_60,*(undefined8 *)puVar4);
              lVar12 = *(long *)(param_1 + 0x30);
              if (lVar12 != 0) {
                *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(param_1 + 0x84);
                *(undefined1 *)(lVar12 + 0x48) = *(undefined1 *)(param_1 + 0x6c);
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

