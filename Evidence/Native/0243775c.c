/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$SetFloor
void Dino_BusSand_App_UI_WinStreakPanel__SetFloor (Dino_BusSand_App_UI_WinStreakPanel_o* __this, float floor, bool scroll, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$SetFloor
   void Dino_BusSand_App_UI_WinStreakPanel__SetFloor (Dino_BusSand_App_UI_WinStreakPanel_o* __this,
   float floor, bool scroll, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__SetFloor_233775c(float param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dStack_88;
  double *pdStack_80;
  long lStack_78;
  double dStack_70;
  double *pdStack_68;
  long lStack_60;
  int iStack_54;
  
                    /* catch() { ... } // from try @ 02437748 with catch @ 02437770 */
                    /* try { // try from 02437774 to 0253777b has its CatchHandler @ 024377d8 */
                    /* try { // try from 0243777c to 0253779f has its CatchHandler @ 02437278 */
                    /* catch() { ... } // from try @ 024376b4 with catch @ 02437780 */
                    /* catch() { ... } // from try @ 02437494 with catch @ 02437784 */
  if ((bRam0000000004f9c644 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9350);
                    /* try { // try from 024377a0 to 025377a3 has its CatchHandler @ 024377c4 */
                    /* try { // try from 024377a4 to 025377c7 has its CatchHandler @ 02437278 */
    FUN_02132f7c(PTR_DAT_04cb9358);
    FUN_02132f7c(PTR_DAT_04cb9360);
    FUN_02132f7c(PTR_DAT_04cb9368);
                    /* catch() { ... } // from try @ 024377a0 with catch @ 024377c4 */
    bRam0000000004f9c644 = 1;
  }
                    /* try { // try from 024377c8 to 025377cf has its CatchHandler @ 024377d8 */
  iStack_54 = 0;
                    /* try { // try from 024377d0 to 025377db has its CatchHandler @ 02437278 */
  dStack_70 = 0.0;
  pdStack_68 = (double *)0x0;
  lStack_60 = 0;
                    /* catch() { ... } // from try @ 0243771c with catch @ 024377d8
                       catch() { ... } // from try @ 02437774 with catch @ 024377d8
                       catch() { ... } // from try @ 024377c8 with catch @ 024377d8 */
  fVar8 = (float)Dino_BusSand_App_UI_WinStreakPanel__FloorY_2337bac(param_1);
  lVar5 = *(long *)(param_2 + 0x58);
  if (lVar5 == 0) goto LAB_02437a88;
  UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar5,0);
  UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar5,0);
  if (*(long *)(param_2 + 0x58) == 0) goto LAB_02437a88;
  UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
            (0x438c0000,fVar8,*(long *)(param_2 + 0x58),0);
  lVar5 = *(long *)(param_2 + 0x70);
  if (lVar5 == 0) goto LAB_02437a88;
  uVar9 = UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar5,0);
  fVar11 = 0.0;
  if (0.0 <= fVar8 + -760.0) {
    fVar11 = fVar8 + -760.0;
  }
  UnityEngine_RectTransform__set_sizeDelta_43cfa70(uVar9,fVar11,lVar5,0);
  if (cRam0000000004f9b891 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa200);
    cRam0000000004f9b891 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar12 = (double)param_1;
  dVar10 = (double)FUN_049b52f0(dVar12,&dStack_88);
  puVar3 = PTR_DAT_04cb9358;
  puVar2 = PTR_DAT_04cb9350;
  if (0.0 <= param_1) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_024378e0;
    }
    dVar12 = (double)(long)(dVar12 + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_024378e0:
    dVar12 = dStack_88;
    if (((long)dStack_88 & 1U) != 0) {
      dVar12 = dStack_88 + dVar10;
    }
  }
  else {
    dVar12 = (double)(long)(dVar12 + -0.5);
  }
  iVar1 = -0x80000000;
  if (dVar12 != INFINITY) {
    iVar1 = (int)dVar12;
  }
  iStack_54 = iVar1;
  if (*(long *)(param_2 + 0xa8) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&dStack_88,*(long *)(param_2 + 0xa8),*(undefined8 *)PTR_DAT_04cb9368);
    bVar7 = 0;
    lStack_60 = lStack_78;
    pdStack_68 = pdStack_80;
    dStack_70 = dStack_88;
    dStack_88 = 0.0;
    pdStack_80 = &dStack_70;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&dStack_70,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lStack_60 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      bVar7 = *(int *)(*(long *)(lStack_60 + 0x10) + 0x14) == iVar1 | bVar7;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&dStack_70,*(undefined8 *)puVar2);
    lVar5 = *(long *)(param_2 + 0x78);
    if (lVar5 != 0) {
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0,lVar5,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0,lVar5,0);
      if (*(long *)(param_2 + 0x78) != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                  (0xc3dc0000,fVar8,*(long *)(param_2 + 0x78),0);
        if ((*(long *)(param_2 + 0x78) != 0) &&
           (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x78),0),
           lVar5 != 0)) {
          UnityEngine_GameObject__SetActive_43c1408(lVar5,0 < iStack_54 & (bVar7 ^ 0xff),0);
          plVar6 = *(long **)(param_2 + 0x88);
          uVar9 = System_Int32__ToString_482d750(&iStack_54,0);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x518))(plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x520));
            if ((param_3 & 1) != 0) {
              Dino_BusSand_App_UI_WinStreakPanel__ScrollTo_2338bbc(fVar8,param_2);
            }
            return;
          }
        }
      }
    }
  }
LAB_02437a88:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

