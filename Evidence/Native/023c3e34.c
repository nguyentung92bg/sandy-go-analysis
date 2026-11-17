/* IL2CPP: Dino.BusSand.App.UI.PaiziRewardTipsPanel$$OnOpen
void Dino_BusSand_App_UI_PaiziRewardTipsPanel__OnOpen (Dino_BusSand_App_UI_PaiziRewardTipsPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PaiziRewardTipsPanel$$OnOpen
   void Dino_BusSand_App_UI_PaiziRewardTipsPanel__OnOpen
   (Dino_BusSand_App_UI_PaiziRewardTipsPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

undefined1  [16]
Dino_BusSand_App_UI_PaiziRewardTipsPanel__OnOpen_22c3e34
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
          long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined4 *puVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar21 [16];
  
                    /* try { // try from 023c3e34 to 024c3e3f has its CatchHandler @ 023c45ac */
  puVar2 = PTR_DAT_04cb67a8;
                    /* try { // try from 023c3e58 to 024c3e77 has its CatchHandler @ 023c4720 */
  if ((bRam0000000004f9c34d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
                    /* try { // try from 023c3e8c to 024c3e8f has its CatchHandler @ 023c470c */
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cad390);
                    /* try { // try from 023c3eb8 to 024c3ebf has its CatchHandler @ 023c4684 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb67a8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
                    /* try { // try from 023c3ed8 to 024c3eef has its CatchHandler @ 023c4704 */
    FUN_02132f7c(PTR_DAT_04cafb18);
    FUN_02132f7c(PTR_DAT_04cb67c8);
    FUN_02132f7c(PTR_DAT_04cb1070);
                    /* try { // try from 023c3efc to 024c3f0b has its CatchHandler @ 023c4664 */
    FUN_02132f7c(PTR_DAT_04cb67d0);
    FUN_02132f7c(PTR_DAT_04cb67d8);
    FUN_02132f7c(PTR_DAT_04cab4f8);
                    /* try { // try from 023c3f1c to 024c3f43 has its CatchHandler @ 023c4718 */
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb1088);
    FUN_02132f7c(PTR_DAT_04cb67e0);
    FUN_02132f7c(PTR_DAT_04cb67e8);
                    /* try { // try from 023c3f54 to 024c3f5f has its CatchHandler @ 023c4650 */
    FUN_02132f7c(PTR_DAT_04cb67f0);
    FUN_02132f7c(PTR_DAT_04cb67f8);
    FUN_02132f7c(PTR_DAT_04cb6800);
    FUN_02132f7c(PTR_DAT_04cb6808);
    FUN_02132f7c(PTR_DAT_04cb6810);
    FUN_02132f7c(PTR_DAT_04cb6818);
                    /* try { // try from 023c3f94 to 024c3f9b has its CatchHandler @ 023c4730 */
    bRam0000000004f9c34d = 1;
  }
  puVar4 = PTR_DAT_04cad788;
  puVar3 = PTR_DAT_04ca9ae8;
                    /* try { // try from 023c3fa8 to 024c3fb3 has its CatchHandler @ 023c472c */
  if (param_5 == (long *)0x0) {
LAB_023c3fdc:
    param_5 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_5,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                    /* try { // try from 023c3fbc to 024c401f has its CatchHandler @ 023c4738 */
    if ((*(byte *)(*param_5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_023c3fdc;
  }
  uVar9 = UnityEngine_Component__GetComponent_object__26f97e8(param_4,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar10 & 1) != 0) {
    lVar11 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
                    /* try { // try from 023c4034 to 024c403f has its CatchHandler @ 023c4710 */
    if ((lVar11 == 0) ||
       (plVar12 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                    (lVar11,*(undefined8 *)PTR_DAT_04cacf98), plVar12 == (long *)0x0
       )) goto LAB_023c4808;
                    /* try { // try from 023c4054 to 024c405b has its CatchHandler @ 023c4604 */
    param_3 = 1.0;
    (**(code **)(*plVar12 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
  }
  puVar7 = PTR_DAT_04cafb18;
  puVar6 = PTR_DAT_04cadc80;
  puVar5 = PTR_DAT_04cabdb0;
  puVar4 = PTR_DAT_04cab4f8;
  puVar2 = PTR_DAT_04caa458;
                    /* try { // try from 023c4074 to 024c4077 has its CatchHandler @ 023c45b8 */
                    /* try { // try from 023c4078 to 024c409b has its CatchHandler @ 023c4600 */
  uVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
  uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 023c40ac to 024c40c7 has its CatchHandler @ 023c45f8 */
  System_Action___ctor_47b5ed0(uVar13,param_4,*(undefined8 *)puVar7,0);
  Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar9,uVar13,0,0,0);
                    /* try { // try from 023c40dc to 024c40e3 has its CatchHandler @ 023c45ec */
                    /* try { // try from 023c40e4 to 024c4107 has its CatchHandler @ 023c45e8 */
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_4,*(undefined8 *)puVar4,0,0);
  plVar12 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar6,0);
  if (plVar12 == (long *)0x0) {
                    /* try { // try from 023c4114 to 024c4117 has its CatchHandler @ 023c4cb0 */
    plVar12 = (long *)0x0;
  }
  else if (*plVar12 != *(long *)puVar5) {
    plVar12 = (long *)0x0;
  }
                    /* try { // try from 023c4120 to 024c4143 has its CatchHandler @ 023c4618 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar12,0,0);
  if ((uVar10 & 1) != 0) {
    if (param_5 == (long *)0x0) goto LAB_023c4808;
    lVar11 = param_5[2];
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 023c4154 to 024c417f has its CatchHandler @ 023c4cb0 */
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
    if ((uVar10 & 1) != 0) {
      if ((param_5[2] == 0) ||
         (UnityEngine_Transform__get_position_43d0e48(param_5[2],0), plVar12 == (long *)0x0))
      goto LAB_023c4808;
      UnityEngine_Transform__set_position_43d0f1c(plVar12,0);
    }
  }
  puVar4 = PTR_DAT_04cb6800;
  puVar2 = PTR_DAT_04cb67d0;
  fVar19 = (float)Dino_BusSand_App_UI_PaiziRewardTipsPanel__AnchorScreenY_22c481c(param_4,plVar12);
  fVar20 = (float)Dino_BusSand_App_UI_PaiziRewardTipsPanel__UpRootHeight_22c49ac(param_4);
                    /* try { // try from 023c41b4 to 024c41b7 has its CatchHandler @ 023c4668 */
  iVar8 = UnityEngine_Screen__get_height_436a6c8(0);
  if (fVar19 + fVar20 <= (float)iVar8) {
                    /* try { // try from 023c41dc to 024c41e3 has its CatchHandler @ 023c45e0 */
    fVar19 = (float)Dino_BusSand_App_UI_PaiziRewardTipsPanel__AnchorScreenY_22c481c(param_4,plVar12)
    ;
    iVar8 = UnityEngine_Screen__get_height_436a6c8(0);
    bVar18 = (float)iVar8 * _UNK_00e2098c < fVar19;
  }
  else {
    bVar18 = true;
                    /* try { // try from 023c41d0 to 024c41d7 has its CatchHandler @ 023c46c8 */
  }
                    /* try { // try from 023c420c to 024c4213 has its CatchHandler @ 023c46b4 */
  lVar14 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar2,0);
  lVar15 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar4,0);
  lVar11 = lVar15;
  if (bVar18 == false) {
    lVar11 = lVar14;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
  if ((uVar10 & 1) != 0) {
    if ((lVar14 == 0) ||
       (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0), lVar14 == 0))
    goto LAB_023c4808;
                    /* try { // try from 023c426c to 024c4273 has its CatchHandler @ 023c469c */
    UnityEngine_GameObject__SetActive_43c1408(lVar14,(bVar18 ^ 0xffU) & 1,0);
  }
                    /* try { // try from 023c4284 to 024c428f has its CatchHandler @ 023c4690 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
  if ((uVar10 & 1) != 0) {
                    /* try { // try from 023c42ac to 024c42c7 has its CatchHandler @ 023c4cb0 */
    if ((lVar15 == 0) ||
       (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar14 == 0))
    goto LAB_023c4808;
    UnityEngine_GameObject__SetActive_43c1408(lVar14,bVar18,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb67c8;
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
                    /* try { // try from 023c42e8 to 024c42eb has its CatchHandler @ 023c46dc */
  if ((uVar10 & 1) != 0) {
    Dino_BusSand_App_UI_PaiziRewardTipsPanel__SetChild_22c4a88
              (lVar11,*(undefined8 *)PTR_DAT_04cb1088,1);
                    /* try { // try from 023c4318 to 024c432b has its CatchHandler @ 023c4624 */
    Dino_BusSand_App_UI_PaiziRewardTipsPanel__SetChild_22c4a88
              (lVar11,*(undefined8 *)PTR_DAT_04cb6808,0);
  }
  lVar14 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 023c433c to 024c4347 has its CatchHandler @ 023c46d0 */
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
                    /* try { // try from 023c4350 to 024c4357 has its CatchHandler @ 023c460c */
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  plVar12 = (long *)0x0;
  if ((uVar10 & 1) != 0) {
    if (lVar11 == 0) goto LAB_023c4808;
                    /* try { // try from 023c4360 to 024c437f has its CatchHandler @ 023c4620 */
    plVar12 = (long *)UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb6818,0);
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)0x0;
    }
    else {
                    /* try { // try from 023c4380 to 024c439f has its CatchHandler @ 023c46cc */
      if (*plVar12 != *(long *)puVar5) {
        plVar12 = (long *)0x0;
      }
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar12,0,0);
  if ((uVar10 & 1) != 0) {
                    /* try { // try from 023c43c0 to 024c43c7 has its CatchHandler @ 023c4610 */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 023c43cc to 024c43d3 has its CatchHandler @ 023c45c4 */
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
    if ((uVar10 & 1) != 0) {
      if (lVar14 == 0) goto LAB_023c4808;
      UnityEngine_Transform__SetParent_43d1e34(lVar14,plVar12,0,0);
                    /* try { // try from 023c43f4 to 024c4433 has its CatchHandler @ 023c4714 */
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      puVar17 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      param_3 = (float)puVar17[2];
      UnityEngine_Transform__set_localPosition_43cfda8(*puVar17,puVar17[1],param_3,lVar14,0);
      if (plVar12 == (long *)0x0) goto LAB_023c4808;
      uVar9 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar12,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar9,_UNK_00e20408,plVar12,0);
    }
  }
                    /* try { // try from 023c445c to 024c445f has its CatchHandler @ 023c45bc */
  puVar7 = PTR_DAT_04cb6810;
  puVar6 = PTR_DAT_04cb67f0;
  puVar4 = PTR_DAT_04cb67e8;
  puVar2 = PTR_DAT_04cb67e0;
                    /* try { // try from 023c4460 to 024c446f has its CatchHandler @ 023c4614 */
                    /* try { // try from 023c447c to 024c4487 has its CatchHandler @ 023c4cb0 */
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_4,*(undefined8 *)PTR_DAT_04cb67d8,0,0);
                    /* try { // try from 023c44a8 to 024c44b3 has its CatchHandler @ 023c4728 */
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_4,*(undefined8 *)puVar7,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_4,*(undefined8 *)puVar2,1,0);
                    /* try { // try from 023c44c0 to 024c44d7 has its CatchHandler @ 023c4724 */
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_4,*(undefined8 *)puVar4,0,0);
                    /* try { // try from 023c44e4 to 024c44e7 has its CatchHandler @ 023c4734 */
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_4,*(undefined8 *)puVar6,1,0);
                    /* try { // try from 023c44e8 to 024c44eb has its CatchHandler @ 023c4708 */
                    /* try { // try from 023c44ec to 024c44ef has its CatchHandler @ 023c4728 */
                    /* try { // try from 023c44f0 to 024c44f3 has its CatchHandler @ 023c46c4 */
                    /* try { // try from 023c44f4 to 024c44f7 has its CatchHandler @ 023c4710 */
  lVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar2,0);
                    /* try { // try from 023c44f8 to 024c44fb has its CatchHandler @ 023c46c0 */
                    /* try { // try from 023c44fc to 024c44ff has its CatchHandler @ 023c46b8 */
                    /* try { // try from 023c4500 to 024c4503 has its CatchHandler @ 023c470c */
                    /* try { // try from 023c4504 to 024c4507 has its CatchHandler @ 023c46b0 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 023c4508 to 024c450b has its CatchHandler @ 023c46a8 */
                    /* try { // try from 023c450c to 024c450f has its CatchHandler @ 023c46a4 */
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
                    /* try { // try from 023c4510 to 024c4513 has its CatchHandler @ 023c4698 */
                    /* try { // try from 023c4514 to 024c4517 has its CatchHandler @ 023c468c */
                    /* try { // try from 023c4518 to 024c451b has its CatchHandler @ 023c4680 */
                    /* try { // try from 023c451c to 024c451f has its CatchHandler @ 023c471c */
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
                    /* try { // try from 023c4520 to 024c4523 has its CatchHandler @ 023c467c */
                    /* try { // try from 023c4524 to 024c4527 has its CatchHandler @ 023c4678 */
  lVar14 = 0;
  if ((uVar10 & 1) != 0) {
                    /* try { // try from 023c4528 to 024c452b has its CatchHandler @ 023c4674 */
    if (lVar11 == 0) goto LAB_023c4808;
                    /* try { // try from 023c452c to 024c452f has its CatchHandler @ 023c4670 */
                    /* try { // try from 023c4530 to 024c4533 has its CatchHandler @ 023c466c */
                    /* try { // try from 023c4534 to 024c4537 has its CatchHandler @ 023c465c */
                    /* try { // try from 023c4538 to 024c453b has its CatchHandler @ 023c4700 */
                    /* try { // try from 023c453c to 024c453f has its CatchHandler @ 023c4654 */
                    /* try { // try from 023c4540 to 024c4543 has its CatchHandler @ 023c464c */
    lVar15 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)PTR_DAT_04cb1070,0);
                    /* try { // try from 023c4544 to 024c4547 has its CatchHandler @ 023c4648 */
    lVar14 = lVar11;
                    /* try { // try from 023c4548 to 024c454b has its CatchHandler @ 023c4640 */
    if (lVar15 != 0) {
      lVar14 = lVar15;
    }
  }
                    /* try { // try from 023c454c to 024c454f has its CatchHandler @ 023c46fc */
  if (param_5 == (long *)0x0) goto LAB_023c4808;
                    /* try { // try from 023c4550 to 024c4553 has its CatchHandler @ 023c46f8 */
  plVar12 = (long *)param_5[3];
                    /* try { // try from 023c4554 to 024c4557 has its CatchHandler @ 023c46f4 */
  if (plVar12 == (long *)0x0) {
                    /* try { // try from 023c456c to 024c456f has its CatchHandler @ 023c46d0 */
    plVar12 = (long *)0x0;
  }
  else {
                    /* try { // try from 023c4558 to 024c455b has its CatchHandler @ 023c4634 */
                    /* try { // try from 023c455c to 024c455f has its CatchHandler @ 023c46ec */
                    /* try { // try from 023c4560 to 024c4563 has its CatchHandler @ 023c4628 */
                    /* try { // try from 023c4564 to 024c456b has its CatchHandler @ 023c46dc */
    if (*plVar12 != *(long *)puVar5) {
      plVar12 = (long *)0x0;
    }
  }
                    /* try { // try from 023c4570 to 024c4573 has its CatchHandler @ 023c4608 */
                    /* try { // try from 023c4574 to 024c4577 has its CatchHandler @ 023c45fc */
                    /* try { // try from 023c4578 to 024c457b has its CatchHandler @ 023c45f4 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 023c457c to 024c457f has its CatchHandler @ 023c45f0 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 023c4580 to 024c4583 has its CatchHandler @ 023c45e4 */
                    /* try { // try from 023c4584 to 024c4587 has its CatchHandler @ 023c46c8 */
                    /* try { // try from 023c4588 to 024c458b has its CatchHandler @ 023c45dc */
                    /* try { // try from 023c458c to 024c458f has its CatchHandler @ 023c45d8 */
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar14,0,0);
                    /* try { // try from 023c4590 to 024c4593 has its CatchHandler @ 023c45c8 */
  uVar9 = extraout_d0;
  uVar13 = extraout_var;
  if ((uVar10 & 1) == 0) {
                    /* try { // try from 023c4594 to 024c4597 has its CatchHandler @ 023c4610 */
                    /* try { // try from 023c4598 to 024c459b has its CatchHandler @ 023c45a8 */
                    /* try { // try from 023c459c to 024c459f has its CatchHandler @ 023c45b0 */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 023c3dfc with catch @ 023c45a0
                       try { // try from 023c45a0 to 024c4757 has its CatchHandler @ 023c37bc */
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 023c3e28 with catch @ 023c45a4 */
                    /* catch() { ... } // from try @ 023c4598 with catch @ 023c45a8 */
                    /* catch() { ... } // from try @ 023c3e34 with catch @ 023c45ac */
                    /* catch() { ... } // from try @ 023c3e1c with catch @ 023c45b0
                       catch() { ... } // from try @ 023c459c with catch @ 023c45b0 */
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(plVar12,0,0);
                    /* catch() { ... } // from try @ 023c3e00 with catch @ 023c45b4 */
    uVar9 = extraout_d0_00;
    uVar13 = extraout_var_00;
    if ((uVar10 & 1) == 0) {
                    /* catch() { ... } // from try @ 023c3dc0 with catch @ 023c45d4 */
      if (plVar12 != (long *)0x0) {
                    /* catch() { ... } // from try @ 023c458c with catch @ 023c45d8 */
                    /* catch() { ... } // from try @ 023c4588 with catch @ 023c45dc */
                    /* catch() { ... } // from try @ 023c41dc with catch @ 023c45e0 */
        uVar9 = UnityEngine_Component__get_gameObject_43bcde8(plVar12,0);
                    /* catch() { ... } // from try @ 023c4580 with catch @ 023c45e4 */
                    /* catch() { ... } // from try @ 023c40e4 with catch @ 023c45e8 */
                    /* catch() { ... } // from try @ 023c40dc with catch @ 023c45ec */
                    /* catch() { ... } // from try @ 023c457c with catch @ 023c45f0 */
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 023c4578 with catch @ 023c45f4 */
                    /* catch() { ... } // from try @ 023c40ac with catch @ 023c45f8 */
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
                    /* catch() { ... } // from try @ 023c4574 with catch @ 023c45fc */
                    /* catch() { ... } // from try @ 023c4078 with catch @ 023c4600 */
                    /* catch() { ... } // from try @ 023c4054 with catch @ 023c4604 */
                    /* catch() { ... } // from try @ 023c4570 with catch @ 023c4608 */
                    /* catch() { ... } // from try @ 023c4350 with catch @ 023c460c */
                    /* catch() { ... } // from try @ 023c43c0 with catch @ 023c4610
                       catch() { ... } // from try @ 023c4594 with catch @ 023c4610 */
                    /* catch() { ... } // from try @ 023c4460 with catch @ 023c4614 */
        lVar11 = UnityEngine_Object__Instantiate_object__2805310
                           (uVar9,lVar14,0,*(undefined8 *)PTR_DAT_04cad390);
                    /* catch() { ... } // from try @ 023c4120 with catch @ 023c4618 */
        if (lVar11 != 0) {
                    /* catch() { ... } // from try @ 023c3a90 with catch @ 023c461c */
                    /* catch() { ... } // from try @ 023c4360 with catch @ 023c4620 */
          plVar16 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar11,0);
                    /* catch() { ... } // from try @ 023c4318 with catch @ 023c4624 */
                    /* catch() { ... } // from try @ 023c4560 with catch @ 023c4628 */
                    /* catch() { ... } // from try @ 023c3d00 with catch @ 023c462c */
                    /* catch() { ... } // from try @ 023c3cac with catch @ 023c4630 */
                    /* catch() { ... } // from try @ 023c4558 with catch @ 023c4634 */
                    /* catch() { ... } // from try @ 023c3c9c with catch @ 023c4638 */
          if ((plVar16 == (long *)0x0) || (*plVar16 != *(long *)puVar5)) {
            UnityEngine_Object__get_name_43c71a4(plVar12,0);
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* catch() { ... } // from try @ 023c3c3c with catch @ 023c463c */
                    /* catch() { ... } // from try @ 023c4548 with catch @ 023c4640 */
                    /* catch() { ... } // from try @ 023c3c1c with catch @ 023c4644 */
          uVar9 = UnityEngine_Object__get_name_43c71a4(plVar12,0);
                    /* catch() { ... } // from try @ 023c4544 with catch @ 023c4648 */
                    /* catch() { ... } // from try @ 023c4540 with catch @ 023c464c */
                    /* catch() { ... } // from try @ 023c3f54 with catch @ 023c4650 */
                    /* catch() { ... } // from try @ 023c453c with catch @ 023c4654 */
          UnityEngine_Object__set_name_43c72ec(plVar16,uVar9,0);
                    /* catch() { ... } // from try @ 023c3bf0 with catch @ 023c4658 */
                    /* catch() { ... } // from try @ 023c4534 with catch @ 023c465c */
                    /* catch() { ... } // from try @ 023c3bdc with catch @ 023c4660 */
          UnityEngine_RectTransform__get_anchorMin_43cf520(plVar12,0);
                    /* catch() { ... } // from try @ 023c3efc with catch @ 023c4664 */
                    /* catch() { ... } // from try @ 023c41b4 with catch @ 023c4668 */
                    /* catch() { ... } // from try @ 023c4530 with catch @ 023c466c */
          UnityEngine_RectTransform__set_anchorMin_43cf5e4(plVar16,0);
                    /* catch() { ... } // from try @ 023c452c with catch @ 023c4670 */
                    /* catch() { ... } // from try @ 023c4528 with catch @ 023c4674 */
                    /* catch() { ... } // from try @ 023c4524 with catch @ 023c4678 */
          UnityEngine_RectTransform__get_anchorMax_43cf6a4(plVar12,0);
                    /* catch() { ... } // from try @ 023c4520 with catch @ 023c467c */
                    /* catch() { ... } // from try @ 023c4518 with catch @ 023c4680 */
                    /* catch() { ... } // from try @ 023c3eb8 with catch @ 023c4684 */
          UnityEngine_RectTransform__set_anchorMax_43cf768(plVar16,0);
                    /* catch() { ... } // from try @ 023c3b24 with catch @ 023c4688 */
                    /* catch() { ... } // from try @ 023c4514 with catch @ 023c468c */
                    /* catch() { ... } // from try @ 023c4284 with catch @ 023c4690 */
          UnityEngine_RectTransform__get_pivot_43cfb30(plVar12,0);
                    /* catch() { ... } // from try @ 023c3b04 with catch @ 023c4694 */
                    /* catch() { ... } // from try @ 023c4510 with catch @ 023c4698 */
                    /* catch() { ... } // from try @ 023c426c with catch @ 023c469c */
          UnityEngine_RectTransform__set_pivot_43cfbf4(plVar16,0);
                    /* catch() { ... } // from try @ 023c3ae8 with catch @ 023c46a0 */
                    /* catch() { ... } // from try @ 023c450c with catch @ 023c46a4 */
                    /* catch() { ... } // from try @ 023c4508 with catch @ 023c46a8 */
          UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar12,0);
                    /* catch() { ... } // from try @ 023c3ad4 with catch @ 023c46ac */
                    /* catch() { ... } // from try @ 023c4504 with catch @ 023c46b0 */
                    /* catch() { ... } // from try @ 023c420c with catch @ 023c46b4 */
          UnityEngine_RectTransform__set_sizeDelta_43cfa70(plVar16,0);
                    /* catch() { ... } // from try @ 023c44fc with catch @ 023c46b8 */
                    /* catch() { ... } // from try @ 023c3dc4 with catch @ 023c46bc */
                    /* catch() { ... } // from try @ 023c44f8 with catch @ 023c46c0 */
          UnityEngine_Transform__get_localScale_43d1b0c(plVar12,0);
                    /* catch() { ... } // from try @ 023c44f0 with catch @ 023c46c4 */
                    /* catch() { ... } // from try @ 023c41d0 with catch @ 023c46c8
                       catch() { ... } // from try @ 023c4584 with catch @ 023c46c8 */
                    /* catch() { ... } // from try @ 023c4380 with catch @ 023c46cc */
          UnityEngine_Transform__set_localScale_43d1be0(plVar16,0);
                    /* catch() { ... } // from try @ 023c433c with catch @ 023c46d0
                       catch() { ... } // from try @ 023c456c with catch @ 023c46d0 */
                    /* catch() { ... } // from try @ 023c3d10 with catch @ 023c46d4 */
                    /* catch() { ... } // from try @ 023c3a58 with catch @ 023c46d8 */
          if (cRam0000000004f9b948 == '\0') {
                    /* catch() { ... } // from try @ 023c42e8 with catch @ 023c46dc
                       catch() { ... } // from try @ 023c4564 with catch @ 023c46dc */
            FUN_02132f7c(PTR_DAT_04cacfc0);
                    /* catch() { ... } // from try @ 023c3d2c with catch @ 023c46e8 */
                    /* catch() { ... } // from try @ 023c3cec with catch @ 023c46ec
                       catch() { ... } // from try @ 023c455c with catch @ 023c46ec */
            cRam0000000004f9b948 = '\x01';
          }
                    /* catch() { ... } // from try @ 023c3ccc with catch @ 023c46f0 */
                    /* catch() { ... } // from try @ 023c3c8c with catch @ 023c46f4
                       catch() { ... } // from try @ 023c4554 with catch @ 023c46f4 */
                    /* catch() { ... } // from try @ 023c3c68 with catch @ 023c46f8
                       catch() { ... } // from try @ 023c4550 with catch @ 023c46f8 */
                    /* catch() { ... } // from try @ 023c3c30 with catch @ 023c46fc
                       catch() { ... } // from try @ 023c454c with catch @ 023c46fc */
                    /* catch() { ... } // from try @ 023c3bfc with catch @ 023c4700
                       catch() { ... } // from try @ 023c4538 with catch @ 023c4700 */
                    /* catch() { ... } // from try @ 023c3ed8 with catch @ 023c4704 */
                    /* catch() { ... } // from try @ 023c44e8 with catch @ 023c4708 */
                    /* catch() { ... } // from try @ 023c3e8c with catch @ 023c470c
                       catch() { ... } // from try @ 023c4500 with catch @ 023c470c */
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                    (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar16,0);
                    /* catch() { ... } // from try @ 023c4034 with catch @ 023c4710
                       catch() { ... } // from try @ 023c44f4 with catch @ 023c4710 */
                    /* catch() { ... } // from try @ 023c43f4 with catch @ 023c4714 */
                    /* catch() { ... } // from try @ 023c3f1c with catch @ 023c4718 */
          lVar11 = UnityEngine_Component__get_gameObject_43bcde8(plVar16,0);
                    /* catch() { ... } // from try @ 023c3b7c with catch @ 023c471c
                       catch() { ... } // from try @ 023c451c with catch @ 023c471c */
          if (lVar11 != 0) {
                    /* catch() { ... } // from try @ 023c3e58 with catch @ 023c4720 */
                    /* catch() { ... } // from try @ 023c44c0 with catch @ 023c4724 */
                    /* catch() { ... } // from try @ 023c44a8 with catch @ 023c4728
                       catch() { ... } // from try @ 023c44ec with catch @ 023c4728 */
            UnityEngine_GameObject__SetActive_43c1408(lVar11,1,0);
                    /* catch() { ... } // from try @ 023c3fa8 with catch @ 023c472c */
                    /* catch() { ... } // from try @ 023c3f94 with catch @ 023c4730 */
                    /* catch() { ... } // from try @ 023c44e4 with catch @ 023c4734 */
            UnityEngine_Transform__SetAsLastSibling_43d4684(plVar16,0);
                    /* catch() { ... } // from try @ 023c3fbc with catch @ 023c4738 */
            plVar12 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                        (param_4,*(undefined8 *)puVar6,0);
            if (plVar12 == (long *)0x0) {
              plVar12 = (long *)0x0;
            }
            else {
                    /* try { // try from 023c4758 to 024c475b has its CatchHandler @ 023c4768 */
              if (*plVar12 != *(long *)puVar5) {
                plVar12 = (long *)0x0;
              }
            }
                    /* catch() { ... } // from try @ 023c4758 with catch @ 023c4768 */
                    /* try { // try from 023c4770 to 024c4777 has its CatchHandler @ 023c4d08 */
            uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar12,0,0);
            if ((uVar10 & 1) != 0) {
              UnityEngine_RectTransform__get_rect_43cf450(plVar16,0);
              if (plVar12 == (long *)0x0) goto LAB_023c4808;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors_43d09cc
                        (param_3 + 100.0,plVar12,0,0);
            }
                    /* try { // try from 023c47a8 to 024c47ab has its CatchHandler @ 023c4c64 */
                    /* try { // try from 023c47ac to 024c47bb has its CatchHandler @ 023c4c68 */
            lVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                               (param_4,*(undefined8 *)PTR_DAT_04cada30);
            if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
            }
            puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 023c47ec to 024c47f7 has its CatchHandler @ 023c4c8c */
            uVar9 = *(undefined8 *)PTR_DAT_04cb67f8;
            if ((bRam0000000004f9c2af & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9ae8,uVar9,0);
              bRam0000000004f9c2af = 1;
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
            if (((uVar10 & 1) == 0) &&
               (uVar10 = System_String__IsNullOrEmpty_46d2084(uVar9,0), (uVar10 & 1) == 0)) {
              if (lVar11 != 0) {
                lVar14 = UnityEngine_Animation__get_Item_4334ee8(lVar11,uVar9,0);
                uVar10 = UnityEngine_TrackedReference__op_Equality_43c6a1c(lVar14,0,0);
                if ((uVar10 & 1) != 0) goto LAB_023a899c;
                UnityEngine_Behaviour__set_enabled_43bc50c(lVar11,1,0);
                UnityEngine_Animation__Stop_4334660(lVar11,0);
                if (lVar14 != 0) {
                  UnityEngine_AnimationState__set_time_43370c0(0,lVar14,0);
                  UnityEngine_Animation__Play_4335164(lVar11,uVar9,0);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224(0,0);
                  }
                  lVar11 = *(long *)(lVar14 + 0x10);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar14,0);
                  }
                  if (pcRam0000000004fa4d58 == (code *)0x0) {
                    pcRam0000000004fa4d58 = (code *)FUN_02132f40(&UNK_00e3f77f);
                  }
                    /* WARNING: Could not recover jumptable at 0x04437260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  auVar21 = (*pcRam0000000004fa4d58)(lVar11);
                  return auVar21;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
LAB_023a899c:
            return ZEXT816(0);
          }
        }
      }
LAB_023c4808:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* catch() { ... } // from try @ 023c4074 with catch @ 023c45b8 */
  auVar21._8_8_ = uVar13;
  auVar21._0_8_ = uVar9;
                    /* catch() { ... } // from try @ 023c445c with catch @ 023c45bc */
                    /* catch() { ... } // from try @ 023c3c64 with catch @ 023c45c0 */
                    /* catch() { ... } // from try @ 023c43cc with catch @ 023c45c4 */
                    /* catch() { ... } // from try @ 023c4590 with catch @ 023c45c8 */
                    /* catch() { ... } // from try @ 023c3b50 with catch @ 023c45cc */
                    /* catch() { ... } // from try @ 023c3a54 with catch @ 023c45d0 */
  return auVar21;
}

