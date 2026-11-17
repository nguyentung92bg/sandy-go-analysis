/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ShowItemMask
void Dino_BusSand_App_UI_HudPanel__ShowItemMask (Dino_BusSand_App_UI_HudPanel_o* __this, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ShowItemMask
   void Dino_BusSand_App_UI_HudPanel__ShowItemMask (Dino_BusSand_App_UI_HudPanel_o* __this, bool on,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__ShowItemMask_230a1b4(long param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* try { // try from 0240a1c4 to 0250a233 has its CatchHandler @ 0240a3a4 */
  if ((bRam0000000004f9c535 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8148);
    FUN_02132f7c(PTR_DAT_04cb8150);
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04cb8158);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb8160);
    bRam0000000004f9c535 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((param_2 & 1) != 0) {
                    /* try { // try from 0240a234 to 0250a32f has its CatchHandler @ 02409660 */
    plVar4 = (long *)(param_1 + 0x50);
    lVar5 = *plVar4;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(*(long *)PTR_DAT_04cb68f0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_App_UI_GuideDimHoles__Create_22c5a1c(0,uVar6,0);
      if (lVar5 != 0) {
        lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
        *plVar4 = lVar3;
        thunk_FUN_02134474(plVar4,lVar3);
        if (*plVar4 != 0) {
          UnityEngine_Object__set_name_43c72ec(*plVar4,*(undefined8 *)PTR_DAT_04cb8160,0);
          if ((*plVar4 != 0) &&
             (lVar3 = UnityEngine_GameObject__get_transform_43c1048(*plVar4,0), lVar3 != 0)) {
            UnityEngine_Transform__SetSiblingIndex_43d4730(lVar3,0,0);
            if (*plVar4 != 0) {
              UnityEngine_GameObject__AddComponent_object__275a54c
                        (*plVar4,*(undefined8 *)PTR_DAT_04cb8150);
              uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb8148);
              System_Func_object____ctor_379de3c(uVar6,param_1,*(undefined8 *)PTR_DAT_04cb8158,0);
              *(undefined8 *)(lVar5 + 0x38) = uVar6;
                    /* try { // try from 0240a330 to 0250a333 has its CatchHandler @ 0240a4a4 */
                    /* try { // try from 0240a334 to 0250a337 has its CatchHandler @ 0240a4a0 */
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x38),uVar6);
              goto LAB_0240a338;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0240a378 to 0250a37b has its CatchHandler @ 0240a3d0 */
      FUN_02133224();
    }
  }
LAB_0240a338:
                    /* try { // try from 0240a338 to 0250a33b has its CatchHandler @ 0240a49c */
                    /* try { // try from 0240a33c to 0250a33f has its CatchHandler @ 0240a494 */
  uVar6 = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 0240a340 to 0250a343 has its CatchHandler @ 0240a484 */
                    /* try { // try from 0240a344 to 0250a347 has its CatchHandler @ 0240a47c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0240a348 to 0250a34b has its CatchHandler @ 0240a470 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0240a34c to 0250a34f has its CatchHandler @ 0240a458 */
                    /* try { // try from 0240a350 to 0250a353 has its CatchHandler @ 0240a450 */
                    /* try { // try from 0240a354 to 0250a357 has its CatchHandler @ 0240a448 */
                    /* try { // try from 0240a358 to 0250a35b has its CatchHandler @ 0240a430 */
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
                    /* try { // try from 0240a35c to 0250a35f has its CatchHandler @ 0240a428 */
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0240a360 to 0250a363 has its CatchHandler @ 0240a424 */
                    /* try { // try from 0240a364 to 0250a367 has its CatchHandler @ 02409660 */
    *(byte *)(param_1 + 0x130) = param_2 & 1;
  }
                    /* try { // try from 0240a368 to 0250a36b has its CatchHandler @ 0240a40c */
                    /* try { // try from 0240a36c to 0250a36f has its CatchHandler @ 0240a408 */
                    /* try { // try from 0240a370 to 0250a373 has its CatchHandler @ 0240a3f8 */
                    /* try { // try from 0240a374 to 0250a377 has its CatchHandler @ 0240a3ec */
  return;
}

