/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Update
void Dino_BusSand_App_UI_HomePanel__Update (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Update
   void Dino_BusSand_App_UI_HomePanel__Update (Dino_BusSand_App_UI_HomePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__Update_22ed234(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000004f9c44b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7650);
    FUN_02132f7c(PTR_DAT_04cb7658);
    FUN_02132f7c(PTR_DAT_04cb7660);
    FUN_02132f7c(PTR_DAT_04cb7668);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c44b = 1;
  }
  puVar2 = PTR_DAT_04cabaf8;
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_40 = 0;
  fVar11 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (*(float *)(param_1 + 0xb4) <= fVar11) {
    fVar11 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(float *)(param_1 + 0xb4) = fVar11 + 1.0;
    Dino_BusSand_App_UI_HomePanel__RefreshWinStreak_22ebfac(param_1,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar4 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (iVar4 != *(int *)(param_1 + 0x48)) {
    Dino_BusSand_App_UI_HomePanel__Refresh_22ea830(param_1);
  }
  fVar11 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (fVar11 < *(float *)(param_1 + 200)) {
    return;
  }
  fVar11 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  lVar7 = *(long *)puVar2;
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  *(float *)(param_1 + 200) = fVar11 + 0.5;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar8 & 1) == 0) {
LAB_023ed3dc:
    bVar1 = false;
  }
  else {
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0),
       lVar7 == 0)) goto LAB_023ed538;
    uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar7,0);
    uVar6 = Dino_BusSand_App_Meta_NoAdsOffer__get_HomeButton_220d208(0);
    if ((uVar5 & 1) == (uVar6 & 1)) goto LAB_023ed3dc;
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_023ed538;
    lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0);
    uVar5 = Dino_BusSand_App_Meta_NoAdsOffer__get_HomeButton_220d208(0);
    if (lVar7 == 0) goto LAB_023ed538;
    UnityEngine_GameObject__SetActive_43c1408(lVar7,uVar5 & 1,0);
    bVar1 = true;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar8 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x88) == 0) ||
       (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0),
       lVar7 == 0)) goto LAB_023ed538;
    bVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar7,0);
  }
  if (*(byte *)(param_1 + 0xcc) != (bVar3 & 1)) {
    bVar1 = true;
    *(byte *)(param_1 + 0xcc) = bVar3 & 1;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_68,*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_04cb7668);
    puVar2 = PTR_DAT_04cb7658;
    uStack_48 = puStack_60;
    uStack_50 = uStack_68;
    lStack_40 = lStack_58;
    uStack_68 = 0;
    puStack_60 = &uStack_50;
    while( true ) {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_50,*(undefined8 *)puVar2);
      lVar7 = lStack_40;
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_50,*(undefined8 *)PTR_DAT_04cb7650);
        if (bVar1) {
          Dino_BusSand_App_UI_HomePanel__Layout_22ece0c(param_1,0);
        }
        return;
      }
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lStack_40,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
      if (*(long *)(lVar7 + 0x20) == 0) break;
      lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x28);
      if (lVar7 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        uVar6 = uVar6 & 1;
      }
      bVar1 = (bool)(uVar6 != (uVar5 & 1) | bVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_023ed538:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

