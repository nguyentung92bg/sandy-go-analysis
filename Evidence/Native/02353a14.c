/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature.<RunGuide>d__22$$MoveNext
bool Dino_BusSand_App_Meta_SystemOpenFeature__RunGuide_d__22__MoveNext (Dino_BusSand_App_Meta_SystemOpenFeature__RunGuide_d__22_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature.<RunGuide>d__22$$MoveNext
   bool Dino_BusSand_App_Meta_SystemOpenFeature__RunGuide_d__22__MoveNext
   (Dino_BusSand_App_Meta_SystemOpenFeature__RunGuide_d__22_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_SystemOpenFeature__RunGuide_d__22__MoveNext_2253a14(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
                    /* try { // try from 02353a14 to 02453a1b has its CatchHandler @ 02353e98 */
                    /* try { // try from 02353a30 to 02453a33 has its CatchHandler @ 02353e34 */
  if ((bRam0000000004f9bfe7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* try { // try from 02353a48 to 02453aab has its CatchHandler @ 02353ef0 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb3d00);
    FUN_02132f7c(PTR_DAT_04cb3d70);
    FUN_02132f7c(PTR_DAT_04cb3d78);
    FUN_02132f7c(PTR_DAT_04cb3d80);
    FUN_02132f7c(PTR_DAT_04cb3d88);
    FUN_02132f7c(PTR_DAT_04cb3d90);
    FUN_02132f7c(PTR_DAT_04cb0a30);
    FUN_02132f7c(PTR_DAT_04cb3d98);
    FUN_02132f7c(PTR_DAT_04cb3da0);
                    /* try { // try from 02353ac0 to 02453ac7 has its CatchHandler @ 02353e54 */
    bRam0000000004f9bfe7 = 1;
  }
  iVar6 = *(int *)(param_1 + 0x10);
                    /* try { // try from 02353ac8 to 02453b37 has its CatchHandler @ 023535a0 */
  plVar7 = (long *)0x0;
  if (iVar6 < 3) {
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (iVar6 == 4) {
                    /* try { // try from 02353b5c to 02453b5f has its CatchHandler @ 02353e30 */
                    /* try { // try from 02353b60 to 02453b6f has its CatchHandler @ 02353e48 */
        if (*(int *)(*(long *)PTR_DAT_04cb3d00 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar8 = Dino_BusSand_App_Meta_SystemOpenFeature__IsActiveInConditions_2252d58(4,1);
                    /* try { // try from 02353b80 to 02453b83 has its CatchHandler @ 02353e0c */
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        iVar6 = *(int *)(param_1 + 0x20);
      }
      puVar3 = PTR_DAT_04cb3d00;
      if (*(int *)(*(long *)PTR_DAT_04cb3d00 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02353ba0 to 02453ba7 has its CatchHandler @ 02353e10 */
      uVar8 = Dino_BusSand_App_Meta_SystemOpenFeature__NeedShowGuide_2252820(iVar6);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      uVar11 = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02353bc4 to 02453bcf has its CatchHandler @ 02353e1c */
      bVar5 = Dino_BusSand_App_Meta_SystemOpenFeature__HasExternalIntro_2253364(uVar11);
      *(byte *)(param_1 + 0x38) = bVar5 & 1;
      uVar10 = Dino_BusSand_App_Meta_SystemOpenFeature__Row_22527b0(*(undefined4 *)(param_1 + 0x20))
      ;
                    /* try { // try from 02353be8 to 02453bef has its CatchHandler @ 02353dfc */
      uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar10,*(undefined8 *)PTR_DAT_04cb3d98,0);
      iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
      if (iVar6 == 2) {
        lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3d90);
        System_Object___ctor_4870e5c(lVar13,0);
        plVar12 = (long *)(param_1 + 0x30);
        *plVar12 = lVar13;
        plVar7 = (long *)thunk_FUN_02134474(plVar12,lVar13);
        puVar2 = PTR_DAT_04caa458;
        if (*(char *)(param_1 + 0x38) != '\0') {
          uVar11 = *(undefined4 *)(param_1 + 0x20);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = Dino_BusSand_App_Meta_SystemOpenFeature__ExternalIntro_2253288(uVar11);
          *(undefined8 *)(param_1 + 0x18) = uVar10;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar10);
          uVar11 = 4;
          goto LAB_02353fac;
        }
        lVar13 = *plVar12;
        if (lVar13 == 0) goto LAB_0235409c;
        uVar11 = *(undefined4 *)(param_1 + 0x20);
        *(undefined1 *)(lVar13 + 0x10) = 0;
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
        System_Action___ctor_47b5ed0(uVar10,lVar13,*(undefined8 *)PTR_DAT_04cb3d88,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_SystemOpenFeature__Intro_2253500(uVar11,uVar10);
        Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c(*(undefined4 *)(param_1 + 0x20));
        goto LAB_02353b0c;
      }
                    /* try { // try from 02353c08 to 02453c0f has its CatchHandler @ 02353ce8 */
      if (iVar6 != 1) {
        return 0;
      }
      lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3d80);
                    /* try { // try from 02353c24 to 02453c33 has its CatchHandler @ 02353cec */
      System_Object___ctor_4870e5c(lVar13,0);
      plVar12 = (long *)(param_1 + 0x28);
      *plVar12 = lVar13;
      plVar7 = (long *)thunk_FUN_02134474(plVar12,lVar13);
      if (*plVar12 == 0) goto LAB_0235409c;
      *(undefined1 *)(*plVar12 + 0x10) = 0;
                    /* try { // try from 02353c50 to 02453c53 has its CatchHandler @ 02353e00 */
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      puVar4 = PTR_DAT_04cad1b0;
      puVar2 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02353c70 to 02453c73 has its CatchHandler @ 02353e0c */
      uVar10 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
                    /* try { // try from 02353c90 to 02453c97 has its CatchHandler @ 02353df4 */
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
      lVar13 = 0;
                    /* try { // try from 02353cac to 02453cbb has its CatchHandler @ 02353e24 */
      if ((uVar8 & 1) != 0) {
        if (cRam0000000004f9b94d == '\0') {
          FUN_02132f7c(PTR_DAT_04cad1b0);
          cRam0000000004f9b94d = '\x01';
        }
                    /* try { // try from 02353cd0 to 02453cdf has its CatchHandler @ 02353e20 */
        plVar7 = (long *)0x0;
        if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_0235409c;
                    /* try { // try from 02353ce0 to 02453d0b has its CatchHandler @ 023535a0 */
                    /* catch() { ... } // from try @ 02353c08 with catch @ 02353ce8 */
        lVar13 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                           (**(long **)(*(long *)puVar4 + 0xb8),*(undefined8 *)PTR_DAT_04cb0a30);
                    /* catch() { ... } // from try @ 02353c24 with catch @ 02353cec */
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02353d0c to 02453d0f has its CatchHandler @ 02353de0 */
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
                    /* try { // try from 02353d10 to 02453da7 has its CatchHandler @ 023535a0 */
      lVar14 = 0;
      if ((uVar8 & 1) != 0) {
        uVar11 = *(undefined4 *)(param_1 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar7 = (long *)Dino_BusSand_App_Meta_SystemOpenFeature__HallNode_2252690(uVar11);
        if (lVar13 == 0) goto LAB_0235409c;
        lVar14 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar13,plVar7,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar7 = (long *)UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
      uVar10 = 0;
      if (((ulong)plVar7 & 1) != 0) {
        if (lVar14 == 0) goto LAB_0235409c;
        lVar13 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
        plVar7 = (long *)0x0;
        if (lVar13 == 0) goto LAB_0235409c;
        uVar8 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar13,0);
        uVar10 = 0;
        if ((uVar8 & 1) != 0) {
          uVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar14,0);
        }
      }
                    /* try { // try from 02353da8 to 02453dab has its CatchHandler @ 02353eec */
                    /* try { // try from 02353dac to 02453daf has its CatchHandler @ 02353e50 */
      uVar11 = *(undefined4 *)(param_1 + 0x20);
                    /* try { // try from 02353db0 to 02453db3 has its CatchHandler @ 02353e4c */
                    /* try { // try from 02353db4 to 02453db7 has its CatchHandler @ 02353e40 */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 02353db8 to 02453dbb has its CatchHandler @ 02353e3c */
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02353dbc to 02453dc7 has its CatchHandler @ 023535a0 */
      uVar9 = Dino_BusSand_App_Meta_SystemOpenFeature__Row_22527b0(uVar11);
                    /* try { // try from 02353dc8 to 02453dcb has its CatchHandler @ 02353e18 */
                    /* try { // try from 02353dcc to 02453dcf has its CatchHandler @ 02353e14 */
                    /* try { // try from 02353dd0 to 02453dd7 has its CatchHandler @ 02353e08 */
      uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)PTR_DAT_04cb3da0,0);
                    /* try { // try from 02353dd8 to 02453ddb has its CatchHandler @ 02353e04 */
                    /* try { // try from 02353ddc to 02453ddf has its CatchHandler @ 02353df8 */
                    /* catch() { ... } // from try @ 02353d0c with catch @ 02353de0 */
      iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar9,0,0);
                    /* try { // try from 02353de8 to 02453def has its CatchHandler @ 02353f54 */
                    /* try { // try from 02353df0 to 02453e7b has its CatchHandler @ 023535a0 */
      uVar11 = *(undefined4 *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 02353c90 with catch @ 02353df4 */
      cVar1 = *(char *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 02353ddc with catch @ 02353df8 */
      uVar15 = *(undefined8 *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 02353be8 with catch @ 02353dfc */
                    /* catch() { ... } // from try @ 02353c50 with catch @ 02353e00 */
                    /* catch() { ... } // from try @ 02353dd8 with catch @ 02353e04 */
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* catch() { ... } // from try @ 02353dd0 with catch @ 02353e08 */
                    /* catch() { ... } // from try @ 02353b80 with catch @ 02353e0c
                       catch() { ... } // from try @ 02353c70 with catch @ 02353e0c */
                    /* catch() { ... } // from try @ 02353ba0 with catch @ 02353e10 */
                    /* catch() { ... } // from try @ 02353dcc with catch @ 02353e14 */
                    /* catch() { ... } // from try @ 02353dc8 with catch @ 02353e18 */
                    /* catch() { ... } // from try @ 02353bc4 with catch @ 02353e1c */
                    /* catch() { ... } // from try @ 02353cd0 with catch @ 02353e20 */
      System_Action___ctor_47b5ed0(uVar9,uVar15,*(undefined8 *)PTR_DAT_04cb3d70,0);
                    /* catch() { ... } // from try @ 02353cac with catch @ 02353e24 */
                    /* catch() { ... } // from try @ 02353938 with catch @ 02353e28 */
                    /* catch() { ... } // from try @ 023539a0 with catch @ 02353e2c */
                    /* catch() { ... } // from try @ 02353b5c with catch @ 02353e30 */
                    /* catch() { ... } // from try @ 02353a30 with catch @ 02353e34 */
                    /* catch() { ... } // from try @ 02353914 with catch @ 02353e38 */
                    /* catch() { ... } // from try @ 02353db8 with catch @ 02353e3c */
                    /* catch() { ... } // from try @ 02353db4 with catch @ 02353e40 */
      uVar10 = Dino_BusSand_App_UI_SystemOpenPanel__Open_21e69f4
                         (uVar11,uVar10,iVar6 == 1,cVar1 == '\0',uVar9,0);
                    /* catch() { ... } // from try @ 02353950 with catch @ 02353e44 */
                    /* catch() { ... } // from try @ 02353b60 with catch @ 02353e48 */
                    /* catch() { ... } // from try @ 02353db0 with catch @ 02353e4c */
                    /* catch() { ... } // from try @ 02353dac with catch @ 02353e50 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02353ac0 with catch @ 02353e54 */
                    /* catch() { ... } // from try @ 02353918 with catch @ 02353e58 */
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
                    /* catch() { ... } // from try @ 02353b38 with catch @ 02353e5c */
      plVar7 = (long *)UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
      if (((ulong)plVar7 & 1) != 0) {
        if (*(char *)(param_1 + 0x38) == '\0') {
                    /* try { // try from 02353e7c to 02453e7f has its CatchHandler @ 02353e88 */
          plVar7 = (long *)Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c
                                     (*(undefined4 *)(param_1 + 0x20));
        }
        if (*plVar12 == 0) goto LAB_0235409c;
                    /* catch() { ... } // from try @ 02353e7c with catch @ 02353e88 */
                    /* try { // try from 02353e8c to 02453e93 has its CatchHandler @ 02353f54 */
        *(undefined1 *)(*plVar12 + 0x10) = 1;
      }
    }
    else {
      if (iVar6 != 1) {
        if (iVar6 != 2) {
          return 0;
        }
LAB_02353b38:
                    /* try { // try from 02353b38 to 02453b3f has its CatchHandler @ 02353e5c */
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    puVar3 = PTR_DAT_04caa458;
    lVar13 = *(long *)(param_1 + 0x28);
    if (lVar13 == 0) goto LAB_0235409c;
    if (*(char *)(lVar13 + 0x10) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
                    /* try { // try from 02353eb8 to 02453ebb has its CatchHandler @ 02353edc */
                    /* try { // try from 02353ebc to 02453edf has its CatchHandler @ 023535a0 */
    if (*(char *)(param_1 + 0x38) != '\0') {
      uVar11 = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04cb3d00 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 02353eb8 with catch @ 02353edc */
                    /* try { // try from 02353ee0 to 02453ee7 has its CatchHandler @ 02353f54 */
      uVar10 = Dino_BusSand_App_Meta_SystemOpenFeature__ExternalIntro_2253288(uVar11);
                    /* try { // try from 02353ee8 to 02453f1b has its CatchHandler @ 023535a0 */
      *(undefined8 *)(param_1 + 0x18) = uVar10;
                    /* catch() { ... } // from try @ 02353da8 with catch @ 02353eec */
                    /* catch() { ... } // from try @ 02353a48 with catch @ 02353ef0 */
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar10);
      uVar11 = 2;
      goto LAB_02353fac;
    }
                    /* try { // try from 02353f1c to 02453f1f has its CatchHandler @ 02353f40 */
                    /* try { // try from 02353f20 to 02453f43 has its CatchHandler @ 023535a0 */
    uVar11 = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)(lVar13 + 0x11) = 0;
    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 02353f1c with catch @ 02353f40 */
                    /* try { // try from 02353f44 to 02453f4b has its CatchHandler @ 02353f54 */
    System_Action___ctor_47b5ed0(uVar10,lVar13,*(undefined8 *)PTR_DAT_04cb3d78,0);
                    /* try { // try from 02353f4c to 02453f57 has its CatchHandler @ 023535a0 */
                    /* catch() { ... } // from try @ 02353de8 with catch @ 02353f54
                       catch() { ... } // from try @ 02353e8c with catch @ 02353f54
                       catch() { ... } // from try @ 02353ee0 with catch @ 02353f54
                       catch() { ... } // from try @ 02353f44 with catch @ 02353f54 */
    if (*(int *)(*(long *)PTR_DAT_04cb3d00 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_SystemOpenFeature__Intro_2253500(uVar11,uVar10);
  }
  else {
    if (iVar6 != 3) {
      if (iVar6 == 4) goto LAB_02353b38;
      if (iVar6 != 5) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_02353b0c:
      plVar7 = (long *)(param_1 + 0x30);
      if (*plVar7 == 0) goto LAB_0235409c;
      if (*(char *)(*plVar7 + 0x10) == '\0') {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        uVar11 = 5;
        goto LAB_02353fac;
      }
      goto LAB_02353f84;
    }
                    /* try { // try from 02353e94 to 02453eb7 has its CatchHandler @ 023535a0 */
                    /* catch() { ... } // from try @ 02353a14 with catch @ 02353e98 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* catch() { ... } // from try @ 023538f0 with catch @ 02353e9c */
  }
  plVar7 = (long *)(param_1 + 0x28);
  if (*plVar7 == 0) {
LAB_0235409c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224(plVar7);
  }
  if (*(char *)(*plVar7 + 0x11) == '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    uVar11 = 3;
LAB_02353fac:
    *(undefined4 *)(param_1 + 0x10) = uVar11;
    return 1;
  }
LAB_02353f84:
  *plVar7 = 0;
  thunk_FUN_02134474(plVar7,0);
  return 0;
}

