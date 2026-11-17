/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Init
void Dino_BusSand_App_UI_UIManager__Init (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Init
   void Dino_BusSand_App_UI_UIManager__Init (Dino_BusSand_App_UI_UIManager_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIManager__Init_21fd2c4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000004f9bc75 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1a30);
    FUN_02132f7c(PTR_DAT_04cb1a38);
    FUN_02132f7c(PTR_DAT_04cb1a40);
    FUN_02132f7c(PTR_DAT_04cad3d0);
    FUN_02132f7c(PTR_DAT_04cb1a48);
    FUN_02132f7c(PTR_DAT_04cb1a50);
    FUN_02132f7c(PTR_DAT_04cb1a58);
    FUN_02132f7c(PTR_DAT_04cb1a60);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cabca8);
    FUN_02132f7c(PTR_DAT_04cb1a68);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cb1a70);
    FUN_02132f7c(PTR_DAT_04cb1a78);
    FUN_02132f7c(PTR_DAT_04cb1a80);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb1a88);
    FUN_02132f7c(PTR_DAT_04cb1a90);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb1a98);
    FUN_02132f7c(PTR_DAT_04cb1aa0);
    FUN_02132f7c(PTR_DAT_04cb1aa8);
    FUN_02132f7c(PTR_DAT_04cb1ab0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fcfe8 with catch @ 022fd430
                        */
    FUN_02132f7c(PTR_DAT_04cb1ab8);
    FUN_02132f7c(PTR_DAT_04cad980);
    FUN_02132f7c(PTR_DAT_04cb1ac0);
                    /* try { // try from 022fd454 to 023fd483 has its CatchHandler @ 022fd454
                       catch(type#1 @ 00000000) { ... } // from try @ 022fd454 with catch @ 022fd454
                       catch(type#1 @ 00000000) { ... } // from try @ 022fd4c4 with catch @ 022fd454
                        */
    FUN_02132f7c(PTR_DAT_04cb1ac8);
    FUN_02132f7c(PTR_DAT_04cb1ad0);
    FUN_02132f7c(PTR_DAT_04cab340);
    FUN_02132f7c(PTR_DAT_04cb1ad8);
                    /* try { // try from 022fd484 to 023fd493 has its CatchHandler @ 022fd4f4 */
    FUN_02132f7c(PTR_DAT_04cb1ae0);
    FUN_02132f7c(PTR_DAT_04cb1ae8);
    FUN_02132f7c(PTR_DAT_04cb1af0);
                    /* try { // try from 022fd4a0 to 023fd4ab has its CatchHandler @ 022fd4e4 */
    bRam0000000004f9bc75 = 1;
  }
  if (cRam0000000004f9bcfb == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
                    /* try { // try from 022fd4c0 to 023fd4c3 has its CatchHandler @ 022fd4e0 */
                    /* try { // try from 022fd4c4 to 023fd92f has its CatchHandler @ 022fd454 */
    cRam0000000004f9bcfb = '\x01';
  }
  puVar2 = PTR_DAT_04cad1b0;
  **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8) = param_5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fd4c0 with catch @ 022fd4e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fd4a0 with catch @ 022fd4e4
                        */
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),param_5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fd484 with catch @ 022fd4f4
                        */
  lVar5 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar5 != 0) {
    lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cb1ad0,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    lVar9 = 0;
    if ((uVar6 & 1) != 0) {
      if (lVar5 == 0) goto LAB_022fde50;
      lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar5,*(undefined8 *)PTR_DAT_04cb1a38);
    }
    if (param_5 != 0) {
      plVar12 = (long *)(param_5 + 0x20);
      *plVar12 = lVar9;
      thunk_FUN_02134474(plVar12);
      lVar5 = *plVar12;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      lVar5 = 0;
      if ((uVar6 & 1) != 0) {
        if (*plVar12 == 0) goto LAB_022fde50;
        lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                          (*plVar12,*(undefined8 *)PTR_DAT_04cb1a58);
      }
      lVar9 = *plVar12;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
        if ((uVar6 & 1) != 0) {
          if ((*plVar12 == 0) ||
             (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*plVar12,0), lVar5 == 0))
          goto LAB_022fde50;
          lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar5,*(undefined8 *)PTR_DAT_04cb1a80);
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar5 == 0) goto LAB_022fde50;
        *(undefined1 *)(lVar5 + 0x4c) = 0;
        *(undefined4 *)(lVar5 + 0x2c) = 1;
      }
      lVar5 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
      if ((lVar5 != 0) &&
         (lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cb1af0,0),
         lVar5 != 0)) {
        lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                          (lVar5,*(undefined8 *)PTR_DAT_04cad3d0);
        plVar14 = (long *)(param_5 + 0x28);
        *plVar14 = lVar9;
        thunk_FUN_02134474(plVar14,lVar9);
        if (*plVar14 != 0) {
          UnityEngine_Canvas__set_renderMode_467f2b4(*plVar14,1,0);
          if (*plVar14 != 0) {
            UnityEngine_Canvas__set_worldCamera_4680ffc(*plVar14,*plVar12,0);
            puVar3 = PTR_DAT_04cb1aa8;
            puVar1 = PTR_DAT_04cb1a40;
            if (*plVar14 != 0) {
              UnityEngine_Canvas__set_additionalShaderChannels_4680600(*plVar14,0x19,0);
              uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                                (lVar5,*(undefined8 *)puVar1);
              *(undefined8 *)(param_5 + 0x40) = uVar7;
              thunk_FUN_02134474();
              lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)puVar3,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
              if ((uVar6 & 1) != 0) {
                if (lVar5 == 0) goto LAB_022fde50;
                uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                                  (lVar5,*(undefined8 *)PTR_DAT_04cb1a50);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar2);
                }
                uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
                if ((uVar6 & 1) != 0) {
                  lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
                  if (lVar9 == 0) goto LAB_022fde50;
                  UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar9,*(undefined8 *)PTR_DAT_04cb1a70);
                }
              }
              plVar12 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,4);
              uStack_64 = UnityEngine_Screen__get_width_436a6a0(0);
              puVar1 = PTR_DAT_04ca9ac8;
              lVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
              if (plVar12 != (long *)0x0) {
                if ((lVar9 != 0) &&
                   (lVar8 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
                {
LAB_022fde58:
                  uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                  FUN_021330e8(uVar7,0);
                }
                if ((int)plVar12[3] != 0) {
                  plVar12[4] = lVar9;
                  thunk_FUN_02134474(plVar12 + 4,lVar9);
                  uStack_68 = UnityEngine_Screen__get_height_436a6c8(0);
                  lVar9 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_68);
                  if ((lVar9 != 0) &&
                     (lVar8 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0
                     )) goto LAB_022fde58;
                  puVar1 = PTR_DAT_04cb1a90;
                  if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
                    plVar12[5] = lVar9;
                    thunk_FUN_02134474(plVar12 + 5,lVar9);
                    uStack_78 = UnityEngine_Screen__get_safeArea_436a810(0);
                    uStack_74 = param_2;
                    uStack_70 = param_3;
                    uStack_6c = param_4;
                    lVar9 = FUN_02133100(*(undefined8 *)puVar1,&uStack_78);
                    if ((lVar9 != 0) &&
                       (lVar8 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar8 == 0)) goto LAB_022fde58;
                    puVar4 = PTR_DAT_04cb1ae8;
                    puVar3 = PTR_DAT_04cb1aa0;
                    puVar1 = PTR_DAT_04cab340;
                    if (2 < *(uint *)(plVar12 + 3)) {
                      plVar12[6] = lVar9;
                      thunk_FUN_02134474(plVar12 + 6,lVar9);
                      lVar9 = UnityEngine_Screen__get_cutouts_436a894(0);
                      uVar15 = *(undefined8 *)puVar1;
                      uVar7 = *(undefined8 *)puVar4;
                      if (lVar9 == 0) {
                        lVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb1a88,0);
                      }
                      lVar8 = *(long *)puVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fd95c with catch @ 022fd930
                        */
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar8 = *(long *)puVar3;
                      }
                      puVar1 = PTR_DAT_04cb1a30;
                      puVar10 = *(undefined8 **)(lVar8 + 0xb8);
                      lVar16 = puVar10[1];
                      if (lVar16 == 0) {
                        if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 022fd958 to 023fd95b has its CatchHandler @ 022fd970 */
                          thunk_FUN_0218fdac();
                    /* try { // try from 022fd95c to 023fd973 has its CatchHandler @ 022fd930 */
                          puVar10 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                        }
                        uVar17 = *puVar10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fd958 with catch @ 022fd970
                        */
                    /* try { // try from 022fd974 to 023fd9c3 has its CatchHandler @ 022fd974
                       catch(type#1 @ 00000000) { ... } // from try @ 022fd974 with catch @ 022fd974
                       catch(type#1 @ 00000000) { ... } // from try @ 022fda04 with catch @ 022fd974
                       catch(type#1 @ 00000000) { ... } // from try @ 022fda50 with catch @ 022fd974
                        */
                        lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb1a60);
                        System_Converter_Rect__object____ctor_3355970
                                  (lVar16,uVar17,*(undefined8 *)PTR_DAT_04cb1a98,0);
                        plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                        *plVar14 = lVar16;
                        thunk_FUN_02134474(plVar14,lVar16);
                      }
                      uVar17 = System_Array__ConvertAll_Rect__object__29009ac
                                         (lVar9,lVar16,*(undefined8 *)puVar1);
                    /* try { // try from 022fd9c4 to 023fd9d3 has its CatchHandler @ 022fda64 */
                      lVar9 = System_String__Join_46d390c(uVar15,uVar17,0);
                    /* try { // try from 022fd9e0 to 023fd9eb has its CatchHandler @ 022fda54 */
                      if ((lVar9 != 0) &&
                         (lVar8 = thunk_FUN_0216e7a0(lVar9,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar8 == 0)) goto LAB_022fde58;
                      puVar3 = PTR_DAT_04caa038;
                      puVar1 = PTR_DAT_04ca9af8;
                      if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
                    /* try { // try from 022fda00 to 023fda03 has its CatchHandler @ 022fda50 */
                    /* try { // try from 022fda04 to 023fda4b has its CatchHandler @ 022fd974 */
                        plVar12[7] = lVar9;
                        thunk_FUN_02134474(plVar12 + 7,lVar9);
                        uVar7 = System_String__Format_46d3570(uVar7,plVar12,0);
                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)puVar1);
                        }
                        UnityEngine_Debug__Log_4360fc8(uVar7,0);
                    /* try { // try from 022fda4c to 023fda4f has its CatchHandler @ 022fde94 */
                        lVar9 = FUN_02133068(*(undefined8 *)puVar3,6);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fda00 with catch @ 022fda50
                       try { // try from 022fda50 to 023fdeb7 has its CatchHandler @ 022fd974 */
                        if (lVar9 == 0) goto LAB_022fde50;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fd9e0 with catch @ 022fda54
                        */
                        if (*(int *)(lVar9 + 0x18) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fd9c4 with catch @ 022fda64
                        */
                          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04cb1ad8;
                          thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20));
                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                            *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_04cb1ab0;
                            thunk_FUN_02134474((undefined8 *)(lVar9 + 0x28));
                            if (2 < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_04cad980;
                              thunk_FUN_02134474((undefined8 *)(lVar9 + 0x30));
                              if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                                *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)PTR_DAT_04cb1ac8;
                                thunk_FUN_02134474((undefined8 *)(lVar9 + 0x38));
                                if (4 < *(uint *)(lVar9 + 0x18)) {
                                  *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_04cb1ab8;
                                  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x40));
                                  if (5 < *(uint *)(lVar9 + 0x18)) {
                                    *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)PTR_DAT_04cb1ae0;
                                    thunk_FUN_02134474((undefined8 *)(lVar9 + 0x48));
                                    puVar3 = PTR_DAT_04cb1a48;
                                    puVar1 = PTR_DAT_04cabdb0;
                                    if (0 < *(int *)(lVar9 + 0x18)) {
                                      iVar13 = 0;
                                      lVar8 = 4;
                                      lVar16 = 0x20;
                                      do {
                                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac();
                                        }
                                        uVar18 = lVar8 - 4;
                                        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0)
                                        ;
                                        if ((uVar6 & 1) == 0) {
                                          lVar11 = *(long *)(param_5 + 0x30);
                                          if (lVar11 == 0) goto LAB_022fde50;
LAB_022fdbdc:
                                          plVar12 = (long *)0x0;
                                        }
                                        else {
                                          if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_022fde54;
                                          if (lVar5 == 0) goto LAB_022fde50;
                                          plVar12 = (long *)UnityEngine_Transform__Find_43d4bec
                                                                      (lVar5,*(undefined8 *)
                                                                              (lVar9 + lVar8 * 8),0)
                                          ;
                                          lVar11 = *(long *)(param_5 + 0x30);
                                          if (lVar11 == 0) goto LAB_022fde50;
                                          if (plVar12 == (long *)0x0) goto LAB_022fdbdc;
                                          if (*plVar12 != *(long *)puVar1) {
                                            plVar12 = (long *)0x0;
                                          }
                                        }
                                        if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_022fde54;
                                        *(long **)(lVar11 + lVar16) = plVar12;
                                        thunk_FUN_02134474(lVar11 + lVar16);
                                        lVar11 = *(long *)(param_5 + 0x30);
                                        if (lVar11 == 0) goto LAB_022fde50;
                                        if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_022fde54;
                                        uVar7 = *(undefined8 *)(lVar11 + lVar8 * 8);
                                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                          thunk_FUN_0218fdac();
                                        }
                                        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0)
                                        ;
                                        if ((uVar6 & 1) != 0) {
                                          lVar11 = *(long *)(param_5 + 0x30);
                                          if (lVar11 == 0) goto LAB_022fde50;
                                          if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_022fde54;
                                          lVar11 = *(long *)(lVar11 + lVar8 * 8);
                                          if (lVar11 == 0) goto LAB_022fde50;
                                          lVar11 = 
                                                  UnityEngine_Component__GetComponent_object__26f97e8
                                                            (lVar11,*(undefined8 *)PTR_DAT_04cad3d0)
                                          ;
                                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                            thunk_FUN_0218fdac(*(long *)puVar2);
                                          }
                                          uVar6 = UnityEngine_Object__op_Inequality_43c8dec
                                                            (lVar11,0,0);
                                          if ((uVar6 & 1) != 0) {
                                            if (lVar11 == 0) goto LAB_022fde50;
                                            UnityEngine_Canvas__set_overrideSorting_467ff6c
                                                      (lVar11,1,0);
                                            UnityEngine_Canvas__set_sortingOrder_46800e4
                                                      (lVar11,iVar13,0);
                                          }
                                          lVar11 = *(long *)(param_5 + 0x30);
                                          if (lVar11 == 0) goto LAB_022fde50;
                                          if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_022fde54;
                                          lVar11 = *(long *)(lVar11 + lVar8 * 8);
                                          if (lVar11 == 0) goto LAB_022fde50;
                                          uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                                                            (lVar11,*(undefined8 *)puVar3);
                                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                            thunk_FUN_0218fdac(*(long *)puVar2);
                                          }
                                          uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0)
                                          ;
                                          if ((uVar6 & 1) != 0) {
                                            lVar11 = *(long *)(param_5 + 0x30);
                                            if (lVar11 == 0) goto LAB_022fde50;
                                            if (*(uint *)(lVar11 + 0x18) <= uVar18)
                                            goto LAB_022fde54;
                                            lVar11 = *(long *)(lVar11 + lVar8 * 8);
                                            if ((lVar11 == 0) ||
                                               (lVar11 = 
                                                  UnityEngine_Component__get_gameObject_43bcde8
                                                            (lVar11,0), lVar11 == 0))
                                            goto LAB_022fde50;
                                            UnityEngine_GameObject__AddComponent_object__275a54c
                                                      (lVar11,*(undefined8 *)PTR_DAT_04cacf90);
                                          }
                                        }
                                        lVar11 = lVar8 + -3;
                                        lVar8 = lVar8 + 1;
                                        iVar13 = iVar13 + 1000;
                                        lVar16 = lVar16 + 8;
                                      } while (lVar11 < *(int *)(lVar9 + 0x18));
                                    }
                                    if (*(int *)(*(long *)PTR_DAT_04cabca8 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac();
                                    }
                                    uVar7 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64
                                                      (0);
                                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                      thunk_FUN_0218fdac(*(long *)puVar2);
                                    }
                                    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
                                    if ((uVar6 & 1) == 0) {
LAB_022fde28:
                                      Dino_BusSand_App_UI_UIManager__ApplyScaler_21fde64(param_5);
                                      return;
                                    }
                                    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
                                    UnityEngine_GameObject___ctor_43c20cc
                                              (lVar5,*(undefined8 *)PTR_DAT_04cb1ac0,0);
                                    if (lVar5 != 0) {
                                      lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0)
                                      ;
                                      uVar7 = UnityEngine_Component__get_transform_43bcd18
                                                        (param_5,0);
                                      if (lVar9 != 0) {
                                        UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar7,0,0);
                                        UnityEngine_GameObject__AddComponent_object__275a54c
                                                  (lVar5,*(undefined8 *)PTR_DAT_04cb1a68);
                                        UnityEngine_GameObject__AddComponent_object__275a54c
                                                  (lVar5,*(undefined8 *)PTR_DAT_04cb1a78);
                                        goto LAB_022fde28;
                                      }
                                    }
                                    goto LAB_022fde50;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
LAB_022fde54:
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
            }
          }
        }
      }
    }
  }
LAB_022fde50:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

