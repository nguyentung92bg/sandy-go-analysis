/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$NewMen
UnityEngine_Transform_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__NewMen (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* itemTemplate, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$NewMen
   UnityEngine_Transform_o* Dino_BusSand_App_UI_BattleRoyaleScenePanel__NewMen
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* itemTemplate,
   UnityEngine_Transform_o* parent, const MethodInfo* method); */

long Dino_BusSand_App_UI_BattleRoyaleScenePanel__NewMen_21930bc
               (long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  
  puVar1 = PTR_DAT_04cae198;
  if ((bRam0000000004f9b9b0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cae1a0);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cae1a8);
    FUN_02132f7c(PTR_DAT_04cae1b0);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae1b8);
    FUN_02132f7c(PTR_DAT_04cae198);
    FUN_02132f7c(PTR_DAT_04cae1c0);
    FUN_02132f7c(PTR_DAT_04cae1c8);
    FUN_02132f7c(PTR_DAT_04cae1d0);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cae1d8);
    FUN_02132f7c(PTR_DAT_04cae1e0);
    bRam0000000004f9b9b0 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar3 != 0) {
                    /* try { // try from 022931c8 to 0239323b has its CatchHandler @ 022931c8
                       catch() { ... } // from try @ 022931c8 with catch @ 022931c8
                       catch() { ... } // from try @ 02293270 with catch @ 022931c8 */
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar3 + 0x10),param_1);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (param_2 != 0) {
      uVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
                    /* try { // try from 0229323c to 02393247 has its CatchHandler @ 022932cc */
      lVar6 = UnityEngine_Object__Instantiate_object__2805310
                        (uVar5,param_3,0,*(undefined8 *)PTR_DAT_04cad390);
                    /* try { // try from 02293258 to 0239325f has its CatchHandler @ 022932b8 */
                    /* try { // try from 02293260 to 0239326f has its CatchHandler @ 022932a4 */
      if (((lVar6 != 0) &&
          (lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0), lVar6 != 0)) &&
         (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar7 != 0)) {
                    /* try { // try from 02293270 to 023932e3 has its CatchHandler @ 022931c8 */
        UnityEngine_GameObject__SetActive_43c1408(lVar7,1,0);
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        puVar2 = PTR_DAT_04caa208;
                    /* catch() { ... } // from try @ 02293260 with catch @ 022932a4 */
        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        UnityEngine_Transform__set_localPosition_43cfda8(*puVar10,puVar10[1],puVar10[2],lVar6,0);
                    /* catch() { ... } // from try @ 02293258 with catch @ 022932b8 */
        if (cRam0000000004f9b65e == '\0') {
                    /* catch() { ... } // from try @ 0229323c with catch @ 022932cc */
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
        UnityEngine_Transform__set_localScale_43d1be0
                  (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                   *(undefined4 *)(lVar7 + 0x14),lVar6,0);
        if (cRam0000000004f9b88b == '\0') {
          FUN_02132f7c(PTR_DAT_04cab4b0);
          cRam0000000004f9b88b = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
        UnityEngine_Transform__set_localRotation_43d156c
                  (*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar6,0);
        if (*(long *)(param_1 + 0x50) != 0) {
          uVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x50),0);
          lVar7 = UnityEngine_Object__Instantiate_object__2805030
                            (uVar5,*(undefined8 *)PTR_DAT_04cae1b0);
          if (((lVar7 != 0) &&
              (lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar7,0), lVar7 != 0)) &&
             (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar8 != 0)) {
            UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
            UnityEngine_Object__set_name_43c72ec(lVar7,*(undefined8 *)PTR_DAT_04cae1c0,0);
            lVar8 = UnityEngine_Transform__Find_43d4bec(lVar6,*(undefined8 *)PTR_DAT_04cae1d8,0);
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
            if ((uVar4 & 1) == 0) {
              lVar8 = lVar6;
            }
            UnityEngine_Transform__SetParent_43d1e34(lVar7,lVar8,0,0);
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
            UnityEngine_Transform__set_localPosition_43cfda8(*puVar10,puVar10[1],puVar10[2],lVar7,0)
            ;
            if (cRam0000000004f9b65e == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65e = '\x01';
            }
            lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
            UnityEngine_Transform__set_localScale_43d1be0
                      (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                       *(undefined4 *)(lVar8 + 0x14),lVar7,0);
            uVar5 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cae1d0,0);
            uVar9 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cae1c8,0);
            Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar9,0,0);
            Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar5,0,0);
            uVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                              (lVar7,*(undefined8 *)PTR_DAT_04cae1a0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
            if ((uVar4 & 1) != 0) {
              uVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                                (lVar7,*(undefined8 *)PTR_DAT_04cada30);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar1);
              }
              uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
              if ((uVar4 & 1) != 0) {
                lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
                if (lVar8 == 0) goto LAB_02293610;
                UnityEngine_GameObject__AddComponent_object__275a54c
                          (lVar8,*(undefined8 *)PTR_DAT_04cae1a8);
              }
            }
            lVar8 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cae1e0,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
            if ((uVar4 & 1) != 0) {
              *(long *)(lVar3 + 0x18) = lVar7;
              thunk_FUN_02134474((long *)(lVar3 + 0x18),lVar7);
              if (lVar8 == 0) goto LAB_02293610;
              uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
              uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              System_Action___ctor_47b5ed0(uVar9,lVar3,*(undefined8 *)PTR_DAT_04cae1b8,0);
                    /* try { // try from 022935f0 to 0239361b has its CatchHandler @ 022935f0
                       catch() { ... } // from try @ 022935f0 with catch @ 022935f0
                       catch() { ... } // from try @ 022937a8 with catch @ 022935f0 */
              Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                        (uVar5,uVar9,0,*(undefined8 *)PTR_DAT_04cad948,0);
            }
            return lVar6;
          }
        }
      }
    }
  }
LAB_02293610:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

