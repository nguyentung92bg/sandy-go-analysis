/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnEconomyChanged
void Dino_BusSand_App_Meta_GiftPackFeature__OnEconomyChanged (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnEconomyChanged
   void Dino_BusSand_App_Meta_GiftPackFeature__OnEconomyChanged
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__OnEconomyChanged_2237220(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar2 = PTR_DAT_04caefe8;
                    /* try { // try from 02337230 to 02437237 has its CatchHandler @ 02337450 */
  if ((bRam0000000004f9beaf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caefe8);
                    /* try { // try from 02337250 to 02437293 has its CatchHandler @ 023374c0 */
    bRam0000000004f9beaf = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_1);
  Dino_BusSand_App_Meta_GiftPackFeature__EvaluateAllPacks_22368ec(param_1);
  lVar8 = *(long *)puVar2;
  if ((bRam0000000004f9d943 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9d943 = 1;
  }
  puVar2 = PTR_DAT_04cac668;
  if (param_1[2] == 0) {
    return;
  }
  uVar7 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  lVar11 = param_1[2];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9d81f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc4908,lVar11,
                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20));
    FUN_02132f7c(PTR_DAT_04cc4910);
    FUN_02132f7c(PTR_DAT_04cc4918);
    FUN_02132f7c(PTR_DAT_04cc4930);
    FUN_02132f7c(PTR_DAT_04cc4920);
    FUN_02132f7c(PTR_DAT_04cb4790);
    FUN_02132f7c(PTR_DAT_04cb4798);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cc4938);
    bRam0000000004f9d81f = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x130) == 0) {
      uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4798);
      System_Collections_Generic_List_object____ctor_3a8138c(uVar4,*(undefined8 *)PTR_DAT_04cb4790);
      *(undefined8 *)(lVar8 + 0x130) = uVar4;
      thunk_FUN_02134474(lVar8 + 0x130,uVar4);
    }
    uVar4 = UnityEngine_JsonUtility__ToJson_44323ac(lVar11,0);
    puVar3 = PTR_DAT_04cc4910;
    if (*(long *)(lVar8 + 0x130) == 0) {
LAB_028ef87c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,*(long *)(lVar8 + 0x130),*(undefined8 *)PTR_DAT_04cc4920);
    lStack_50 = lStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_60,*(undefined8 *)puVar3);
      lVar11 = lStack_50;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
        lVar11 = *(long *)(lVar8 + 0x130);
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc4938);
        Dino_BusSand_App_Meta_StrPair___ctor_2240614(lVar8,0);
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x10),uVar7);
          *(undefined8 *)(lVar8 + 0x18) = uVar4;
          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x18),uVar4);
          if (lVar11 != 0) {
            lVar9 = *(long *)(lVar11 + 0x10);
            lVar10 = *(long *)PTR_DAT_04cc4930;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar6 = lVar8;
                thunk_FUN_02134474(plVar6,lVar8);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar11,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
              return;
            }
          }
        }
        goto LAB_028ef87c;
      }
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar5 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_50 + 0x10),uVar7,0);
    } while ((uVar5 & 1) == 0);
    *(undefined8 *)(lVar11 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(lVar11 + 0x18),uVar4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cc4908);
  }
  return;
}

