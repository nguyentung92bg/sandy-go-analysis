/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$PassRewards
System_Collections_Generic_List_PassportFeature_Reward__o* Dino_BusSand_App_Meta_PassportFeature__PassRewards (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$PassRewards
   System_Collections_Generic_List_PassportFeature_Reward__o*
   Dino_BusSand_App_Meta_PassportFeature__PassRewards (Dino_BusSand_App_Meta_PassportFeature_o*
   __this, int32_t i, const MethodInfo* method); */

long Dino_BusSand_App_Meta_PassportFeature__PassRewards_2245198(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  int aiStack_78 [2];
  long lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_58;
  undefined3 uStack_54;
  
  puVar2 = PTR_DAT_04cb39c8;
                    /* catch() { ... } // from try @ 0234511c with catch @ 023451a0
                       catch() { ... } // from try @ 02345190 with catch @ 023451a0 */
                    /* try { // try from 023451a4 to 024451a7 has its CatchHandler @ 023451b0 */
                    /* try { // try from 023451a8 to 024451b3 has its CatchHandler @ 02344a84 */
                    /* catch() { ... } // from try @ 023451a4 with catch @ 023451b0 */
  if ((bRam0000000004f9bf44 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb39c8);
    bRam0000000004f9bf44 = 1;
  }
  uVar13 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9bf42 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0388);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cb0390);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf42 = 1;
  }
  lVar12 = Dino_BusSand_App_Meta_PassportFeature__CfgList_22449bc(param_1,uVar13);
  puVar2 = PTR_DAT_04cb0388;
  if (((param_2 < 0) || (lVar12 == 0)) || (*(int *)(lVar12 + 0x18) <= param_2)) {
    lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0390);
    System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
              (lVar12,*(undefined8 *)puVar2);
    return lVar12;
  }
  uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                     (lVar12,param_2,*(undefined8 *)PTR_DAT_04cb15c0);
  if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04caef48);
  }
  puVar3 = PTR_DAT_04cb0390;
  puVar2 = PTR_DAT_04cb0388;
  if ((bRam0000000004f9bf41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20a8);
    FUN_02132f7c(PTR_DAT_04cb20b0);
    FUN_02132f7c(PTR_DAT_04cb20b8);
    FUN_02132f7c(PTR_DAT_04cb39b8);
    FUN_02132f7c(PTR_DAT_04cb20c0);
    FUN_02132f7c(PTR_DAT_04cb0388);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04cb0390);
    bRam0000000004f9bf41 = 1;
  }
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
            (lVar12,*(undefined8 *)puVar2);
  lVar9 = Dino_BusSand_App_MiniJson__Arr_2156264(uVar13,0);
  puVar5 = PTR_DAT_04cb39b8;
  puVar4 = PTR_DAT_04cb20b0;
  puVar3 = PTR_DAT_04cb20a8;
  puVar2 = PTR_DAT_04cb15c0;
  if (lVar9 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (aiStack_78,lVar9,*(undefined8 *)PTR_DAT_04cb20c0);
    uStack_80 = CONCAT44(uStack_64,uStack_68);
    lStack_88 = lStack_70;
LAB_02344e44:
    uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                       (&uStack_90,*(undefined8 *)puVar4);
    if ((uVar10 & 1) != 0) {
      lVar9 = Dino_BusSand_App_MiniJson__Arr_2156264(uStack_80,0);
      if ((lVar9 != 0) && (1 < *(int *)(lVar9 + 0x18))) {
        uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar9,0,*(undefined8 *)puVar2);
        iVar7 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
        uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar9,1,*(undefined8 *)puVar2);
        lVar11 = Dino_BusSand_App_MiniJson__Long_2156378(uVar13,0,0);
        if ((0 < iVar7) && (0 < lVar11)) {
          bVar6 = false;
          uStack_54 = 0;
          uStack_58 = 0;
          if (2 < *(int *)(lVar9 + 0x18)) {
            uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar9,2,*(undefined8 *)puVar2);
            iVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar13,0,0);
            bVar6 = iVar8 != 0;
          }
          if (lVar12 != 0) {
            lVar9 = *(long *)(lVar12 + 0x10);
            lVar14 = *(long *)puVar5;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                *(bool *)(lVar9 + 0x30) = bVar6;
                *(int *)(lVar9 + 0x20) = iVar7;
                *(undefined4 *)(lVar9 + 0x24) = 0;
                *(long *)(lVar9 + 0x28) = lVar11;
                *(undefined4 *)(lVar9 + 0x31) = uStack_58;
                *(uint *)(lVar9 + 0x34) = CONCAT31(uStack_54,uStack_58._3_1_);
              }
              else {
                uStack_64 = CONCAT31(uStack_54,uStack_58._3_1_);
                aiStack_78[1] = 0;
                uStack_68 = CONCAT31((int3)uStack_58,bVar6);
                aiStack_78[0] = iVar7;
                lStack_70 = lVar11;
                System_Collections_Generic_List_PassportFeature_Reward___AddWithResize_3b58380
                          (lVar12,aiStack_78,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_02344e44;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      goto LAB_02344e44;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_90,*(undefined8 *)puVar3);
  }
  return lVar12;
}

