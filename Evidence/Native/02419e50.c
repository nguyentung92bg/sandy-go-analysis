/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnItem
void Dino_BusSand_App_UI_LevelEnterPanel__OnItem (Dino_BusSand_App_UI_LevelEnterPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnItem
   void Dino_BusSand_App_UI_LevelEnterPanel__OnItem (Dino_BusSand_App_UI_LevelEnterPanel_o* __this,
   int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_UI_LevelEnterPanel__OnItem_2319e50(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  if ((param_2 != 0x2711) && (param_2 != 0x3eb)) {
    return;
  }
  if ((bRam0000000004f9c57e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8600);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cb8608);
    FUN_02132f7c(PTR_DAT_04cb8610);
    FUN_02132f7c(PTR_DAT_04cb8618);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cb8620);
    FUN_02132f7c(PTR_DAT_04cb8628);
    FUN_02132f7c(PTR_DAT_04cb8548);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c57e = 1;
  }
  puVar5 = PTR_DAT_04cb8610;
  puVar4 = PTR_DAT_04cb8548;
  puVar3 = PTR_DAT_04cae220;
  puVar2 = PTR_DAT_04cac440;
  puVar1 = PTR_DAT_04cabaf8;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator_3437768
            (&uStack_b8,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cb8600);
  uStack_70 = uStack_98;
  uStack_88 = puStack_b0;
  uStack_90 = uStack_b8;
  lStack_78 = lStack_a0;
  uStack_80 = uStack_a8;
  uStack_b8 = 0;
  puStack_b0 = &uStack_90;
  while( true ) {
    uVar12 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext_363171c
                       (&uStack_90,*(undefined8 *)puVar5);
    lVar7 = lStack_78;
    uVar6 = uStack_80;
    if ((uVar12 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose_3631840
                (&uStack_90,*(undefined8 *)PTR_DAT_04cb8608);
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar8 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar9 = Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(uVar6 & 0xffffffff,0);
    uVar13 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar6 & 0xffffffff,0);
    lVar14 = Dino_BusSand_App_CheatFlags__Usable_214f578(uVar13,0);
    lVar15 = *(long *)puVar4;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar4;
    }
    if (**(long **)(lVar15 + 0xb8) == 0) break;
    uVar10 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                       (**(long **)(lVar15 + 0xb8),uVar6 & 0xffffffff,*(undefined8 *)puVar3);
    if (iVar8 < iVar9) {
      uVar16 = 0;
    }
    else {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = Dino_BusSand_App_UI_LevelEnterPanel__get_NeedHallGuide_2319d7c();
      if ((uVar12 & 1) == 0) {
        uVar16 = 2;
        if (lVar14 < 1) {
          uVar16 = 3;
        }
      }
      else {
        uVar16 = 1;
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_Meta_Economy__UnlockLevel_2202a00(uVar6 & 0xffffffff,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_KitBoosterButton__Set_2288aac(lVar7,uVar16,lVar14,uVar11,uVar10 & 1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

