/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$Merge
void Dino_BusSand_App_Meta_PassportFeature__Merge (System_Collections_Generic_List_PassportFeature_Reward__o* into, System_Collections_Generic_List_PassportFeature_Reward__o* add, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$Merge
   void Dino_BusSand_App_Meta_PassportFeature__Merge
   (System_Collections_Generic_List_PassportFeature_Reward__o* into,
   System_Collections_Generic_List_PassportFeature_Reward__o* add, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__Merge_224864c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f9bf77 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf638);
    FUN_02132f7c(PTR_DAT_04caf640);
    FUN_02132f7c(PTR_DAT_04caf648);
    FUN_02132f7c(PTR_DAT_04cb39b8);
    FUN_02132f7c(PTR_DAT_04caf650);
    FUN_02132f7c(PTR_DAT_04cb03b0);
    FUN_02132f7c(PTR_DAT_04cb03b8);
    FUN_02132f7c(PTR_DAT_04cb3a20);
    bRam0000000004f9bf77 = 1;
  }
  puVar4 = PTR_DAT_04cb3a20;
  puVar3 = PTR_DAT_04cb39b8;
  puVar2 = PTR_DAT_04cb03b8;
  puVar1 = PTR_DAT_04caf640;
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_PassportFeature_Reward___GetEnumerator_3b58f1c
            (&uStack_b8,param_2,*(undefined8 *)PTR_DAT_04caf650);
  uStack_70 = uStack_98;
  lStack_88 = lStack_b0;
  uStack_90 = uStack_b8;
  lStack_78 = lStack_a0;
  uStack_80 = uStack_a8;
LAB_0234874c:
  do {
    do {
      uVar8 = System_Collections_Generic_List_Enumerator_PassportFeature_Reward___MoveNext_3613ea8
                        (&uStack_90,*(undefined8 *)puVar1);
      uVar7 = uStack_70;
      lVar6 = lStack_78;
      uVar5 = uStack_80;
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_PassportFeature_Reward___Dispose_3613ea4
                  (&uStack_90,*(undefined8 *)PTR_DAT_04caf638);
        return;
      }
      iVar13 = (int)uStack_80;
    } while ((iVar13 < 1) || (lStack_78 < 1));
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = *(uint *)(param_1 + 0x18);
    if (0 < (int)uVar9) {
      iVar12 = 0;
      uVar14 = (uint)uStack_70;
      do {
        System_Collections_Generic_List_PassportFeature_Reward___get_Item_3b58010
                  (&uStack_b8,param_1,iVar12,*(undefined8 *)puVar2);
        if (((int)uStack_b8 == iVar13) &&
           (System_Collections_Generic_List_PassportFeature_Reward___get_Item_3b58010
                      (&uStack_b8,param_1,iVar12,*(undefined8 *)puVar2),
           (uVar14 & 1) == ((byte)uStack_a8 & 1))) {
          if (-1 < iVar12) {
            System_Collections_Generic_List_PassportFeature_Reward___get_Item_3b58010
                      (&uStack_b8,param_1,iVar12,*(undefined8 *)puVar2);
            lStack_b0 = lStack_b0 + lVar6;
            System_Collections_Generic_List_PassportFeature_Reward___set_Item_3b58078
                      (param_1,iVar12,&uStack_b8,*(undefined8 *)puVar4);
            goto LAB_0234874c;
          }
          uVar9 = *(uint *)(param_1 + 0x18);
          break;
        }
        uVar9 = *(uint *)(param_1 + 0x18);
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)uVar9);
    }
    lVar10 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)puVar3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (uVar9 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar9 * 0x18;
      *(uint *)(param_1 + 0x18) = uVar9 + 1;
      *(undefined8 *)(lVar10 + 0x20) = uVar5;
      *(long *)(lVar10 + 0x28) = lVar6;
      *(undefined8 *)(lVar10 + 0x30) = uVar7;
    }
    else {
      uStack_b8 = uVar5;
      lStack_b0 = lVar6;
      uStack_a8 = uVar7;
      System_Collections_Generic_List_PassportFeature_Reward___AddWithResize_3b58380
                (param_1,&uStack_b8,
                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}

