/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$Raise
void Dino_BusSand_App_UI_UIParticleSorting__Raise (UnityEngine_GameObject_o* go, int32_t order, int32_t layerId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$Raise
   void Dino_BusSand_App_UI_UIParticleSorting__Raise (UnityEngine_GameObject_o* go, int32_t order,
   int32_t layerId, const MethodInfo* method); */

void Dino_BusSand_App_UI_UIParticleSorting__Raise_217de64
               (long param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
                    /* try { // try from 0227de80 to 0237de8b has its CatchHandler @ 0227e008 */
  if ((bRam0000000004f9b911 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cacf90);
    FUN_02132f7c(PTR_DAT_04cad3d8);
    FUN_02132f7c(PTR_DAT_04cad3e0);
                    /* try { // try from 0227debc to 0237dec3 has its CatchHandler @ 0227dfd4 */
    FUN_02132f7c(PTR_DAT_04cad3e8);
    FUN_02132f7c(PTR_DAT_04cad3f0);
                    /* try { // try from 0227ded4 to 0237dee3 has its CatchHandler @ 0227dfd0 */
    FUN_02132f7c(PTR_DAT_04cad3f8);
    FUN_02132f7c(PTR_DAT_04cad400);
    FUN_02132f7c(PTR_DAT_04cad408);
    FUN_02132f7c(PTR_DAT_04cad410);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0227df10 to 0237df17 has its CatchHandler @ 0227dfcc */
    bRam0000000004f9b911 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 == 0) {
LAB_0227e1d4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 0227df20 to 0237df27 has its CatchHandler @ 0227dfe0 */
  uVar3 = UnityEngine_GameObject__GetComponent_object__275a5dc
                    (param_1,*(undefined8 *)PTR_DAT_04cad408);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0227df48 to 0237df6b has its CatchHandler @ 0227dfd8 */
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 0227df6c to 0237dfc3 has its CatchHandler @ 0227dcd0 */
    uVar3 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (param_1,*(undefined8 *)PTR_DAT_04cad400);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      uVar3 = UnityEngine_GameObject__GetComponentInChildren_object__275a9b4
                        (param_1,1,*(undefined8 *)PTR_DAT_04cad3e0);
                    /* try { // try from 0227dfc4 to 0237dfcb has its CatchHandler @ 0227dfe0 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0227df10 with catch @ 0227dfcc
                       try { // try from 0227dfcc to 0237e02b has its CatchHandler @ 0227dcd0 */
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
                    /* catch() { ... } // from try @ 0227ded4 with catch @ 0227dfd0 */
                    /* catch() { ... } // from try @ 0227debc with catch @ 0227dfd4 */
                    /* catch() { ... } // from try @ 0227df48 with catch @ 0227dfd8 */
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
                    /* catch() { ... } // from try @ 0227df20 with catch @ 0227dfe0
                       catch() { ... } // from try @ 0227dfc4 with catch @ 0227dfe0 */
      if ((uVar4 & 1) == 0) {
        uVar3 = UnityEngine_GameObject__GetComponentInChildren_object__275a9b4
                          (param_1,1,*(undefined8 *)PTR_DAT_04cad3e8);
                    /* catch() { ... } // from try @ 0227de80 with catch @ 0227e008 */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0227dda0 with catch @ 0227e00c */
                    /* catch() { ... } // from try @ 0227dd70 with catch @ 0227e010 */
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
                    /* catch() { ... } // from try @ 0227de44 with catch @ 0227e014 */
                    /* catch() { ... } // from try @ 0227dde0 with catch @ 0227e018
                       catch() { ... } // from try @ 0227de10 with catch @ 0227e018
                       catch() { ... } // from try @ 0227de2c with catch @ 0227e018 */
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
        if ((uVar4 & 1) == 0) {
                    /* try { // try from 0227e02c to 0237e067 has its CatchHandler @ 0227e02c
                       catch() { ... } // from try @ 0227e02c with catch @ 0227e02c
                       catch() { ... } // from try @ 0227e0dc with catch @ 0227e02c
                       catch() { ... } // from try @ 0227e108 with catch @ 0227e02c */
          lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc
                            (param_1,*(undefined8 *)PTR_DAT_04cad3f0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
          if ((uVar4 & 1) != 0) {
                    /* try { // try from 0227e068 to 0237e07f has its CatchHandler @ 0227e1a8 */
            if (lVar5 == 0) goto LAB_0227e1d4;
            uVar4 = UnityEngine_Canvas__get_overrideSorting_467feb8(lVar5,0);
            if (((uVar4 & 1) != 0) &&
               (iVar2 = UnityEngine_Canvas__get_sortingOrder_4680030(lVar5,0), param_2 <= iVar2)) {
              return;
            }
          }
                    /* try { // try from 0227e098 to 0237e09f has its CatchHandler @ 0227e1a4 */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
          if ((uVar4 & 1) != 0) {
            lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (param_1,*(undefined8 *)PTR_DAT_04cacf88);
          }
          if (lVar5 != 0) {
                    /* try { // try from 0227e0d8 to 0237e0db has its CatchHandler @ 0227e1ac */
                    /* try { // try from 0227e0dc to 0237e0f7 has its CatchHandler @ 0227e02c */
            UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar5,1,0);
            UnityEngine_Canvas__set_sortingLayerID_46803d4(lVar5,param_3,0);
                    /* try { // try from 0227e0f8 to 0237e107 has its CatchHandler @ 0227e1ac */
            UnityEngine_Canvas__set_sortingOrder_46800e4(lVar5,param_2,0);
                    /* try { // try from 0227e108 to 0237e1bf has its CatchHandler @ 0227e02c */
            UnityEngine_Canvas__set_additionalShaderChannels_4680600(lVar5,0x19,0);
            uVar3 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (param_1,*(undefined8 *)PTR_DAT_04cad3f8);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
            if ((uVar4 & 1) != 0) {
              UnityEngine_GameObject__AddComponent_object__275a54c
                        (param_1,*(undefined8 *)PTR_DAT_04cacf90);
            }
            lVar5 = UnityEngine_GameObject__GetComponent_object__275a5dc
                              (param_1,*(undefined8 *)PTR_DAT_04cad410);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
            if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 0227e098 with catch @ 0227e1a4 */
                    /* catch() { ... } // from try @ 0227e068 with catch @ 0227e1a8 */
                    /* catch() { ... } // from try @ 0227e0d8 with catch @ 0227e1ac
                       catch() { ... } // from try @ 0227e0f8 with catch @ 0227e1ac */
              lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                                (param_1,*(undefined8 *)PTR_DAT_04cad3d8);
            }
            if (lVar5 != 0) {
                    /* try { // try from 0227e1c0 to 0237e233 has its CatchHandler @ 0227e1c0
                       catch(type#1 @ 00000000) { ... } // from try @ 0227e1c0 with catch @ 0227e1c0
                        */
              *(int *)(lVar5 + 0x20) = param_2;
              *(undefined4 *)(lVar5 + 0x24) = param_3;
              return;
            }
          }
          goto LAB_0227e1d4;
        }
      }
    }
  }
  return;
}

