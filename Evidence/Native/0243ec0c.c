/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Create
Dino_BusSand_Cheat_AutoPlayHand_o* Dino_BusSand_Cheat_AutoPlayHand__Create (UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$Create
   Dino_BusSand_Cheat_AutoPlayHand_o* Dino_BusSand_Cheat_AutoPlayHand__Create
   (UnityEngine_Transform_o* parent, const MethodInfo* method); */

long Dino_BusSand_Cheat_AutoPlayHand__Create_233ec0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cad748;
  puVar1 = PTR_DAT_04cad730;
                    /* try { // try from 0243ec1c to 0253ec27 has its CatchHandler @ 0243ecf4 */
                    /* try { // try from 0243ec28 to 0253ec33 has its CatchHandler @ 0243ecf0 */
  if ((bRam0000000004f9c673 & 1) == 0) {
                    /* try { // try from 0243ec3c to 0253ec47 has its CatchHandler @ 0243ecec */
    FUN_02132f7c(PTR_DAT_04cb9538);
                    /* try { // try from 0243ec48 to 0253ec57 has its CatchHandler @ 0243ecf8 */
    FUN_02132f7c(PTR_DAT_04cb9540);
                    /* try { // try from 0243ec58 to 0253ecbb has its CatchHandler @ 0243ed08 */
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cb9548);
    bRam0000000004f9c673 = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar2,1);
  uVar6 = *(undefined8 *)puVar1;
                    /* try { // try from 0243ecbc to 0253ece7 has its CatchHandler @ 0243ea80 */
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar4 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 0243ece8 to 0253eceb has its CatchHandler @ 0243ed04 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ec3c with catch @ 0243ecec
                       try { // try from 0243ecec to 0253ed2b has its CatchHandler @ 0243ea80 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ec28 with catch @ 0243ecf0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ec1c with catch @ 0243ecf4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ec48 with catch @ 0243ecf8
                        */
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,0);
    }
    puVar2 = PTR_DAT_04cb9548;
    puVar1 = PTR_DAT_04caa070;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ebf8 with catch @ 0243ecfc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ec04 with catch @ 0243ed00
                        */
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ece8 with catch @ 0243ed04
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ec58 with catch @ 0243ed08
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ebd8 with catch @ 0243ed0c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ebc8 with catch @ 0243ed10
                        */
    plVar3[4] = lVar4;
    thunk_FUN_02134474(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 0243ed2c to 0253ed2f has its CatchHandler @ 0243ed48 */
                    /* try { // try from 0243ed30 to 0253ed4b has its CatchHandler @ 0243ea80 */
    UnityEngine_GameObject___ctor_43c2310(lVar4,*(undefined8 *)puVar2,plVar3,0);
                    /* catch() { ... } // from try @ 0243ed2c with catch @ 0243ed48 */
                    /* try { // try from 0243ed4c to 0253ed53 has its CatchHandler @ 0243ed5c */
    if ((lVar4 != 0) &&
       (lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0), puVar1 = PTR_DAT_04cacf88,
       lVar5 != 0)) {
                    /* try { // try from 0243ed54 to 0253ed5f has its CatchHandler @ 0243ea80 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243ed4c with catch @ 0243ed5c
                        */
      UnityEngine_Transform__SetParent_43d1e34(lVar5,param_1,0,0);
      lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_04cb9540;
      if (lVar5 != 0) {
        UnityEngine_Canvas__set_renderMode_467f2b4(lVar5,0,0);
        UnityEngine_Canvas__set_sortingOrder_46800e4(lVar5,29000,0);
        lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_04cb9538;
        if (lVar5 != 0) {
          *(undefined4 *)(lVar5 + 0x20) = 1;
          UnityEngine_UI_CanvasScaler__set_referenceResolution_4682f88
                    (0x44870000,0x44f00000,lVar5,0);
          uVar6 = *(undefined8 *)puVar1;
          *(undefined4 *)(lVar5 + 0x38) = 0x3f000000;
          lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,uVar6);
          plVar3 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
          if (lVar5 != 0) {
            if (plVar3 == (long *)0x0) {
              *(undefined8 *)(lVar5 + 0x20) = 0;
            }
            else {
              lVar4 = *(long *)PTR_DAT_04cabdb0;
              if ((*plVar3 != lVar4) || (*(long **)(lVar5 + 0x20) = plVar3, *plVar3 != lVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_021335a4(plVar3);
              }
            }
            thunk_FUN_02134474(lVar5 + 0x20,plVar3);
            Dino_BusSand_Cheat_AutoPlayHand__Build_233ee84(lVar5);
            return lVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

