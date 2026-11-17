/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Reachable
bool Dino_BusSand_App_QaPilot_Runner__Reachable (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Reachable
   bool Dino_BusSand_App_QaPilot_Runner__Reachable (UnityEngine_Transform_o* t, const MethodInfo*
   method); */

uint Dino_BusSand_App_QaPilot_Runner__Reachable_215b954(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  long alStack_b0 [10];
  
  puVar1 = PTR_DAT_04cabca8;
  if ((bRam0000000004f9b7fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd80);
    FUN_02132f7c(PTR_DAT_04cabca8);
    FUN_02132f7c(PTR_DAT_04cabd88);
    FUN_02132f7c(PTR_DAT_04cabd90);
    FUN_02132f7c(PTR_DAT_04cabd98);
    FUN_02132f7c(PTR_DAT_04cabda0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabcc0);
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
                    /* catch() { ... } // from try @ 0225ba80 with catch @ 0225ba00 */
    FUN_02132f7c(PTR_DAT_04cabdb8);
                    /* try { // try from 0225ba10 to 0235ba17 has its CatchHandler @ 0225bab4 */
    bRam0000000004f9b7fa = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
  if (param_1 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
                    /* try { // try from 0225ba40 to 0235ba4f has its CatchHandler @ 0225bab0 */
    plVar8 = param_1;
                    /* try { // try from 0225ba50 to 0235ba67 has its CatchHandler @ 0225baac */
    if (*param_1 != *(long *)PTR_DAT_04cabdb0) {
      plVar8 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
                    /* try { // try from 0225ba7c to 0235ba7f has its CatchHandler @ 0225ba94 */
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 0225ba80 to 0235bacf has its CatchHandler @ 0225ba00 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 0225ba7c with catch @ 0225ba94 */
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(plVar8,0,0);
    if ((uVar5 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
LAB_0225bce0:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* catch() { ... } // from try @ 0225ba50 with catch @ 0225baac */
                    /* catch() { ... } // from try @ 0225ba40 with catch @ 0225bab0 */
                    /* catch() { ... } // from try @ 0225ba10 with catch @ 0225bab4 */
      lVar6 = UnityEngine_Component__GetComponentInParent_object__26f9d74
                        (plVar8,*(undefined8 *)PTR_DAT_04cabd80);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
                    /* try { // try from 0225bae0 to 0235bae3 has its CatchHandler @ 0225baf8 */
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
      uVar9 = 0;
      if ((uVar5 & 1) == 0) {
        if (lVar6 == 0) goto LAB_0225bce0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225bae0 with catch @ 0225baf8
                        */
        iVar2 = UnityEngine_Canvas__get_renderMode_467f200(lVar6,0);
        if (iVar2 == 0) {
          uVar9 = 0;
        }
        else {
          lVar6 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar6,0);
          if (lVar6 == 0) goto LAB_0225bce0;
          uVar9 = UnityEngine_Canvas__get_worldCamera_4680f2c(lVar6,0);
        }
      }
                    /* try { // try from 0225bb30 to 0235bb5f has its CatchHandler @ 0225bb30
                       catch() { ... } // from try @ 0225bb30 with catch @ 0225bb30
                       catch() { ... } // from try @ 0225bb64 with catch @ 0225bb30 */
      lVar6 = FUN_02133068(*(undefined8 *)PTR_DAT_04cabdb8,4);
      UnityEngine_RectTransform__GetWorldCorners_43d0720(plVar8,lVar6,0);
      if (lVar6 == 0) goto LAB_0225bce0;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0225bce4:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* try { // try from 0225bb60 to 0235bb63 has its CatchHandler @ 0225bb84 */
      uVar13 = *(undefined4 *)(lVar6 + 0x20);
      fVar14 = *(float *)(lVar6 + 0x24);
                    /* try { // try from 0225bb64 to 0235bb97 has its CatchHandler @ 0225bb30 */
      uVar15 = *(undefined4 *)(lVar6 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 0225bb60 with catch @ 0225bb84 */
      fVar10 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                                (uVar13,fVar14,uVar15,uVar9,0);
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0225bce4;
      fVar12 = *(float *)(lVar6 + 0x3c);
      fVar11 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                                (*(undefined4 *)(lVar6 + 0x38),fVar12,*(undefined4 *)(lVar6 + 0x40),
                                 uVar9,0);
                    /* try { // try from 0225bbc8 to 0235bc2b has its CatchHandler @ 0225bbc8
                       catch(type#1 @ 00000000) { ... } // from try @ 0225bbc8 with catch @ 0225bbc8
                       catch(type#1 @ 00000000) { ... } // from try @ 0225bc38 with catch @ 0225bbc8
                       catch(type#1 @ 00000000) { ... } // from try @ 0225bc5c with catch @ 0225bbc8
                       catch(type#1 @ 00000000) { ... } // from try @ 0225bc98 with catch @ 0225bbc8
                        */
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabda0);
      System_Collections_Generic_List_RaycastResult____ctor_3a9f350
                (lVar6,*(undefined8 *)PTR_DAT_04cabd88);
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabcc0);
      UnityEngine_EventSystems_PointerEventData___ctor_46a11f8(lVar7,lVar4,0);
      if (lVar7 == 0) goto LAB_0225bce0;
      *(float *)(lVar7 + 0x104) = (fVar10 + fVar11) * 0.5;
      *(float *)(lVar7 + 0x108) = (fVar14 + fVar12) * 0.5;
                    /* try { // try from 0225bc2c to 0235bc37 has its CatchHandler @ 0225bc70 */
                    /* try { // try from 0225bc38 to 0235bc4b has its CatchHandler @ 0225bbc8 */
      if ((lVar4 == 0) ||
         (UnityEngine_EventSystems_EventSystem__RaycastAll_46a2410(lVar4,lVar7,lVar6,0), lVar6 == 0)
         ) goto LAB_0225bce0;
      if (*(int *)(lVar6 + 0x18) != 0) {
                    /* try { // try from 0225bc4c to 0235bc5b has its CatchHandler @ 0225bc6c */
                    /* try { // try from 0225bc5c to 0235bc87 has its CatchHandler @ 0225bbc8 */
        System_Collections_Generic_List_RaycastResult___get_Item_3a9f8e8
                  (alStack_b0,lVar6,0,*(undefined8 *)PTR_DAT_04cabd98);
        if (alStack_b0[0] == 0) goto LAB_0225bce0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225bc4c with catch @ 0225bc6c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225bc2c with catch @ 0225bc70
                        */
        lVar4 = UnityEngine_GameObject__get_transform_43c1048(alStack_b0[0],0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0225bc88 to 0235bc97 has its CatchHandler @ 0225bca0 */
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
                    /* try { // try from 0225bc98 to 0235bca3 has its CatchHandler @ 0225bbc8 */
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,param_1,0);
        if ((uVar5 & 1) == 0) {
          if (lVar4 == 0) goto LAB_0225bce0;
          uVar3 = UnityEngine_Transform__IsChildOf_43d4dc4(lVar4,param_1,0);
          goto LAB_0225bca4;
        }
      }
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225bc88 with catch @ 0225bca0
                        */
  uVar3 = 1;
LAB_0225bca4:
                    /* try { // try from 0225bcac to 0235bd17 has its CatchHandler @ 0225bcac
                       catch(type#1 @ 00000000) { ... } // from try @ 0225bcac with catch @ 0225bcac
                        */
  return uVar3 & 1;
}

