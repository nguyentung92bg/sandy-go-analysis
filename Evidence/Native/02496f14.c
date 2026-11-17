/* IL2CPP: Dino.BusSand.View.Fx$$Create
Dino_BusSand_View_Fx_o* Dino_BusSand_View_Fx__Create (UnityEngine_Transform_o* parent, float worldScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$Create
   Dino_BusSand_View_Fx_o* Dino_BusSand_View_Fx__Create (UnityEngine_Transform_o* parent, float
   worldScale, const MethodInfo* method); */

long Dino_BusSand_View_Fx__Create_2396f14(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cbc180;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c8e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc100);
    FUN_02132f7c(PTR_DAT_04cbc188);
                    /* try { // try from 02496f64 to 02596f6b has its CatchHandler @ 024973b4 */
    FUN_02132f7c(PTR_DAT_04caa070);
                    /* try { // try from 02496f6c to 02596fc3 has its CatchHandler @ 02496e74 */
    FUN_02132f7c(PTR_DAT_04cbc180);
    bRam0000000004f9c8e8 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)puVar2,0);
  if ((lVar3 != 0) &&
     (lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0), puVar1 = PTR_DAT_04cbc188,
     lVar4 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar4,param_2,0,0);
                    /* try { // try from 02496fc4 to 02596fcb has its CatchHandler @ 02497428 */
    lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar3,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_04cbc100;
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x58) = param_1;
                    /* try { // try from 02496fe4 to 02596feb has its CatchHandler @ 0249739c */
      Dino_BusSand_View_Fx__Build_2397060();
                    /* try { // try from 02496ff0 to 02596ff7 has its CatchHandler @ 02497394 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 02496ffc to 02597003 has its CatchHandler @ 02497390 */
      if (cRam0000000004f9c95b == '\0') {
        FUN_02132f7c(PTR_DAT_04cbc100);
        cRam0000000004f9c95b = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      **(long **)(lVar4 + 0xb8) = lVar3;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar3);
                    /* try { // try from 02497044 to 0259704f has its CatchHandler @ 0249745c */
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

