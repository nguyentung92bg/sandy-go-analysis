/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi$$BindHall
void Dino_BusSand_App_UI_NoAdsUi__BindHall (Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi$$BindHall
   void Dino_BusSand_App_UI_NoAdsUi__BindHall (Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_NoAdsUi__BindHall_21cb444
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  float *pfVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  
  puVar2 = PTR_DAT_04cb0110;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022cb448 to 023cb44f has its CatchHandler @ 022cb478 */
                    /* try { // try from 022cb450 to 023cb4b7 has its CatchHandler @ 022cb34c */
  if ((bRam0000000004f9bb18 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb448 with catch @ 022cb478
                        */
    FUN_02132f7c(PTR_DAT_04caa458);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb3e0 with catch @ 022cb47c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb398 with catch @ 022cb480
                        */
    FUN_02132f7c(PTR_DAT_04caec68);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb38c with catch @ 022cb490
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb3d0 with catch @ 022cb494
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb424 with catch @ 022cb494
                        */
    FUN_02132f7c(PTR_DAT_04cb0118);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb370 with catch @ 022cb4a4
                        */
    FUN_02132f7c(PTR_DAT_04cb0120);
    FUN_02132f7c(PTR_DAT_04cb0110);
                    /* try { // try from 022cb4b8 to 023cb4bf has its CatchHandler @ 022cb4c8 */
                    /* try { // try from 022cb4c0 to 023cb4cb has its CatchHandler @ 022cb34c */
    FUN_02132f7c(PTR_DAT_04cb0128);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb4b8 with catch @ 022cb4c8
                        */
                    /* try { // try from 022cb4cc to 023cb4cf has its CatchHandler @ 022cb4d8 */
    FUN_02132f7c(PTR_DAT_04cad948);
                    /* try { // try from 022cb4d0 to 023cb4db has its CatchHandler @ 022cb34c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb4cc with catch @ 022cb4d8
                        */
    FUN_02132f7c(PTR_DAT_04cb0130);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb5e0 with catch @ 022cb4dc
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb650 with catch @ 022cb4dc
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb660 with catch @ 022cb4dc
                        */
    bRam0000000004f9bb18 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar6,0);
                    /* try { // try from 022cb500 to 023cb50b has its CatchHandler @ 022cb634 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
                    /* try { // try from 022cb51c to 023cb527 has its CatchHandler @ 022cb620 */
                    /* try { // try from 022cb528 to 023cb537 has its CatchHandler @ 022cb610 */
  if ((param_4 != 0) &&
     (uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)PTR_DAT_04cb0130,0),
     lVar6 != 0)) {
    puVar13 = (undefined8 *)(lVar6 + 0x10);
    *puVar13 = uVar8;
    thunk_FUN_02134474(puVar13,uVar8);
    uVar8 = *puVar13;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022cb560 to 023cb56f has its CatchHandler @ 022cb624 */
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022cb570 to 023cb58f has its CatchHandler @ 022cb60c */
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022cb5b0 to 023cb5bf has its CatchHandler @ 022cb624 */
    lVar9 = Dino_BusSand_App_UI_GiftPackUi__Ticker_21acea4
                      (param_4,*(undefined8 *)PTR_DAT_04cb0128,0);
    puVar1 = PTR_DAT_04caa458;
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0x28) = 0x3f800000;
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 022cb5d8 to 023cb5df has its CatchHandler @ 022cb608 */
                    /* try { // try from 022cb5e0 to 023cb647 has its CatchHandler @ 022cb4dc */
      System_Action___ctor_47b5ed0(uVar8,lVar6,*(undefined8 *)PTR_DAT_04cb0118,0);
      *(undefined8 *)(lVar9 + 0x20) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20),uVar8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb5d8 with catch @ 022cb608
                        */
      if (*(long *)(lVar6 + 0x10) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb570 with catch @ 022cb60c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb528 with catch @ 022cb610
                        */
        uVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar6 + 0x10),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb51c with catch @ 022cb620
                        */
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb560 with catch @ 022cb624
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb5b0 with catch @ 022cb624
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb500 with catch @ 022cb634
                        */
        System_Action___ctor_47b5ed0(uVar10,lVar6,*(undefined8 *)PTR_DAT_04cb0120,0);
                    /* try { // try from 022cb648 to 023cb64f has its CatchHandler @ 022cb658 */
                    /* try { // try from 022cb650 to 023cb65b has its CatchHandler @ 022cb4dc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb648 with catch @ 022cb658
                        */
                    /* try { // try from 022cb65c to 023cb65f has its CatchHandler @ 022cb668 */
        Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar8,uVar10,1,*(undefined8 *)PTR_DAT_04cad948,0);
        puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022cb660 to 023cb66b has its CatchHandler @ 022cb4dc */
        lVar6 = *(long *)(lVar6 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb65c with catch @ 022cb668
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb770 with catch @ 022cb66c
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb7e0 with catch @ 022cb66c
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb7f0 with catch @ 022cb66c
                        */
        if ((bRam0000000004f9bb19 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9d18);
          FUN_02132f7c(PTR_DAT_04caec68);
          FUN_02132f7c(PTR_DAT_04cab550);
          FUN_02132f7c(PTR_DAT_04cb00a0);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cb0138);
          FUN_02132f7c(PTR_DAT_04caef10);
          bRam0000000004f9bb19 = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
        if ((uVar7 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_04cb00a0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar9 = Dino_BusSand_App_Meta_NoAdsFeature__get_I_2243704(0);
          if (lVar9 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = Dino_BusSand_App_Meta_NoAdsFeature__ShouldShowHallEntry_2243a30(lVar9,0);
          }
          if ((lVar6 == 0) ||
             (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar9 == 0)) {
LAB_022cb96c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
          if ((uVar3 & 1) != (uVar4 & 1)) {
            lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
            if (lVar9 == 0) goto LAB_022cb96c;
            UnityEngine_GameObject__SetActive_43c1408(lVar9,uVar3 & 1,0);
          }
          if ((uVar3 & 1) != 0) {
            fVar14 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar6,0);
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            puVar1 = PTR_DAT_04caa208;
            pfVar11 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            if ((param_3 - pfVar11[2]) * (param_3 - pfVar11[2]) +
                (fVar14 - *pfVar11) * (fVar14 - *pfVar11) +
                (param_2 - pfVar11[1]) * (param_2 - pfVar11[1]) < _UNK_00e1fea0) {
              if (cRam0000000004f9b65e == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65e = '\x01';
                pfVar11 = *(float **)(*(long *)puVar1 + 0xb8);
              }
              UnityEngine_Transform__set_localScale_43d1be0
                        (pfVar11[3],pfVar11[4],pfVar11[5],lVar6,0);
            }
            lVar6 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04caef10,0);
            lVar12 = *(long *)PTR_DAT_04ca9d18;
            lVar9 = *(long *)(lVar12 + 0x38);
            if (lVar9 == 0) {
              FUN_0216b4cc(lVar12);
              lVar9 = *(long *)(lVar12 + 0x38);
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0216b470();
            }
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0216b470();
            }
            uVar8 = **(undefined8 **)(lVar9 + 0xb8);
            if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
            }
            uVar8 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb0138,uVar8,0);
            if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
            }
            puVar1 = PTR_DAT_04ca9ae8;
            if ((bRam0000000004f9ba6b & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cada48,uVar8,0);
              FUN_02132f7c(PTR_DAT_04ca9ae8);
              bRam0000000004f9ba6b = 1;
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
            if ((uVar7 & 1) == 0) {
              if ((lVar6 == 0) ||
                 (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                                    (lVar6,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_022a95f0:
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar3 = *(uint *)(lVar6 + 0x18);
              if (0 < (int)uVar3) {
                lVar9 = 0;
                do {
                  if (uVar3 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  plVar5 = *(long **)(lVar6 + 0x20 + lVar9 * 8);
                  if (plVar5 == (long *)0x0) goto LAB_022a95f0;
                  (**(code **)(*plVar5 + 0x518))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x520));
                  uVar3 = *(uint *)(lVar6 + 0x18);
                  lVar9 = lVar9 + 1;
                } while ((int)lVar9 < (int)uVar3);
              }
            }
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

