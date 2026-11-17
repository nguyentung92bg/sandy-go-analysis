/* IL2CPP: Dino.BusSand.App.UI.KitValues$$Read
Dino_BusSand_App_UI_KitValues_o* Dino_BusSand_App_UI_KitValues__Read (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitValues$$Read
   Dino_BusSand_App_UI_KitValues_o* Dino_BusSand_App_UI_KitValues__Read (UnityEngine_Transform_o* t,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_KitValues__Read_218308c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  
                    /* try { // try from 0228308c to 0238308f has its CatchHandler @ 022830ac */
  puVar3 = PTR_DAT_04cad780;
                    /* try { // try from 02283094 to 0238309f has its CatchHandler @ 022830a0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02283094 with catch @ 022830a0
                        */
                    /* try { // try from 022830a4 to 023830b3 has its CatchHandler @ 022830bc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0228308c with catch @ 022830ac
                        */
  if ((bRam0000000004f9b93e & 1) == 0) {
                    /* try { // try from 022830b4 to 023830bf has its CatchHandler @ 02282e60 */
    FUN_02132f7c(PTR_DAT_04cad788);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022830a4 with catch @ 022830bc
                        */
                    /* try { // try from 022830c0 to 023830f3 has its CatchHandler @ 022830c0
                       catch() { ... } // from try @ 022830c0 with catch @ 022830c0
                       catch() { ... } // from try @ 022830f8 with catch @ 022830c0 */
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04cad780);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9b93e = 1;
  }
                    /* try { // try from 022830f4 to 023830f7 has its CatchHandler @ 02283108 */
                    /* try { // try from 022830f8 to 0238311b has its CatchHandler @ 022830c0 */
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  Dino_BusSand_App_UI_KitValues___ctor_21845dc();
  if (param_5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 022830f4 with catch @ 02283108 */
    if (*param_5 == *(long *)PTR_DAT_04cabdb0) {
      uVar12 = UnityEngine_RectTransform__get_anchorMin_43cf520(param_5,0);
      if (lVar7 == 0) goto LAB_0228337c;
      *(undefined4 *)(lVar7 + 0x10) = uVar12;
      *(undefined4 *)(lVar7 + 0x14) = param_2;
      uVar12 = UnityEngine_RectTransform__get_anchorMax_43cf6a4(param_5,0);
      *(undefined4 *)(lVar7 + 0x18) = uVar12;
      *(undefined4 *)(lVar7 + 0x1c) = param_2;
      uVar12 = UnityEngine_RectTransform__get_pivot_43cfb30(param_5,0);
      *(undefined4 *)(lVar7 + 0x20) = uVar12;
      *(undefined4 *)(lVar7 + 0x24) = param_2;
      uVar12 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(param_5,0);
      *(undefined4 *)(lVar7 + 0x28) = uVar12;
      *(undefined4 *)(lVar7 + 0x2c) = param_2;
      uVar12 = UnityEngine_RectTransform__get_sizeDelta_43cf9ac(param_5,0);
      *(undefined4 *)(lVar7 + 0x30) = uVar12;
      *(undefined4 *)(lVar7 + 0x34) = param_2;
      uVar12 = UnityEngine_Transform__get_localScale_43d1b0c(param_5,0);
    }
    else {
      uVar12 = UnityEngine_Transform__get_localScale_43d1b0c(param_5,0);
      if (lVar7 == 0) goto LAB_0228337c;
    }
    *(undefined4 *)(lVar7 + 0x38) = uVar12;
    *(undefined4 *)(lVar7 + 0x3c) = param_2;
    *(undefined4 *)(lVar7 + 0x40) = param_3;
    UnityEngine_Transform__get_localEulerAngles_43d1480(param_5,0);
    *(undefined4 *)(lVar7 + 0x44) = param_3;
    lVar8 = UnityEngine_Component__get_gameObject_43bcde8(param_5,0);
    puVar4 = PTR_DAT_04cad788;
    puVar3 = PTR_DAT_04ca9ae8;
    if (lVar8 != 0) {
      bVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
      uVar11 = *(undefined8 *)puVar4;
      *(byte *)(lVar7 + 0x48) = bVar5 & 1;
      plVar9 = (long *)UnityEngine_Component__GetComponent_object__26f97e8(param_5,uVar11);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
      if ((uVar10 & 1) != 0) {
        *(undefined1 *)(lVar7 + 0x49) = 1;
        if (plVar9 == (long *)0x0) goto LAB_0228337c;
        *(long *)(lVar7 + 0x50) = plVar9[0x1b];
        thunk_FUN_02134474((long *)(lVar7 + 0x50));
        uVar12 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
        *(undefined4 *)(lVar7 + 0x58) = uVar12;
        *(undefined4 *)(lVar7 + 0x5c) = param_2;
        *(undefined4 *)(lVar7 + 0x60) = param_3;
        *(undefined4 *)(lVar7 + 100) = param_4;
        lVar8 = plVar9[0x21];
        uVar1 = *(undefined1 *)((long)plVar9 + 0xec);
        *(int *)(lVar7 + 0x68) = (int)plVar9[0x1d];
        *(int *)(lVar7 + 0x6c) = (int)lVar8;
        *(undefined1 *)(lVar7 + 0x70) = uVar1;
        bVar5 = (**(code **)(*plVar9 + 0x2b8))(plVar9,*(undefined8 *)(*plVar9 + 0x2c0));
        *(byte *)(lVar7 + 0x71) = bVar5 & 1;
      }
      plVar9 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                 (param_5,*(undefined8 *)PTR_DAT_04cad790);
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar8);
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(plVar9,0,0);
      if ((uVar10 & 1) != 0) {
        *(undefined1 *)(lVar7 + 0x72) = 1;
        if (plVar9 == (long *)0x0) goto LAB_0228337c;
        *(long *)(lVar7 + 0x78) = plVar9[0x1f];
        thunk_FUN_02134474();
        uVar11 = (**(code **)(*plVar9 + 0x528))(plVar9,*(undefined8 *)(*plVar9 + 0x530));
        *(undefined8 *)(lVar7 + 0x80) = uVar11;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x80),uVar11);
        lVar8 = plVar9[0x4c];
        *(undefined4 *)(lVar7 + 0x88) = *(undefined4 *)((long)plVar9 + 0x20c);
        lVar13 = plVar9[0x4f];
        *(char *)(lVar7 + 0x9c) = (char)lVar8;
        *(long *)(lVar7 + 0x8c) = lVar13;
        uVar12 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
        *(undefined4 *)(lVar7 + 0xa0) = uVar12;
        *(undefined4 *)(lVar7 + 0xa4) = param_2;
        *(undefined4 *)(lVar7 + 0xa8) = param_3;
        *(undefined4 *)(lVar7 + 0xac) = param_4;
        uVar6 = TMPro_TMP_Text__get_alignment_42cc600(plVar9,0);
        lVar8 = plVar9[0x61];
        lVar13 = plVar9[0x5a];
        lVar2 = plVar9[0x5d];
        uVar12 = *(undefined4 *)((long)plVar9 + 0x314);
        *(undefined4 *)(lVar7 + 0xb0) = uVar6;
        *(int *)(lVar7 + 0xb4) = (int)lVar8;
        lVar8 = plVar9[0x50];
        *(int *)(lVar7 + 0x94) = (int)lVar13;
        *(int *)(lVar7 + 0x98) = (int)lVar2;
        *(undefined4 *)(lVar7 + 0xb8) = uVar12;
        *(int *)(lVar7 + 0xbc) = (int)lVar8;
      }
                    /* try { // try from 02283370 to 02383403 has its CatchHandler @ 02283370
                       catch(type#1 @ 00000000) { ... } // from try @ 02283370 with catch @ 02283370
                       catch(type#1 @ 00000000) { ... } // from try @ 02283438 with catch @ 02283370
                       catch(type#1 @ 00000000) { ... } // from try @ 022834d8 with catch @ 02283370
                       catch(type#1 @ 00000000) { ... } // from try @ 02283528 with catch @ 02283370
                        */
      return lVar7;
    }
  }
LAB_0228337c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

