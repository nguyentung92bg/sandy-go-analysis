/* IL2CPP: Dino.BusSand.App.Tween$$Scale
Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Scale (UnityEngine_Transform_o* tr, UnityEngine_Vector3_o to, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tween$$Scale
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Scale (UnityEngine_Transform_o* tr,
   UnityEngine_Vector3_o to, float duration, const MethodInfo* method); */

long Dino_BusSand_App_Tween__Scale_2161548
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_04cac238;
  uVar8 = param_2;
  uVar9 = param_3;
  if ((bRam0000000004f9b826 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cac240);
    FUN_02132f7c(PTR_DAT_04cac238);
    bRam0000000004f9b826 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + 0x10);
    *plVar6 = param_5;
    thunk_FUN_02134474(plVar6,param_5);
    *(undefined4 *)(lVar4 + 0x24) = param_1;
    *(undefined4 *)(lVar4 + 0x28) = param_2;
    *(undefined4 *)(lVar4 + 0x2c) = param_3;
    puVar3 = PTR_DAT_04cac240;
    puVar2 = PTR_DAT_04cac208;
    puVar1 = PTR_DAT_04cac1e8;
    if (*plVar6 != 0) {
                    /* try { // try from 02261600 to 02361663 has its CatchHandler @ 02261600
                       catch() { ... } // from try @ 02261600 with catch @ 02261600
                       catch() { ... } // from try @ 02261668 with catch @ 02261600 */
      uVar7 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar6,0);
      uVar5 = *(undefined8 *)puVar2;
      *(undefined4 *)(lVar4 + 0x18) = uVar7;
      *(undefined4 *)(lVar4 + 0x1c) = uVar8;
      *(undefined4 *)(lVar4 + 0x20) = uVar9;
      uVar5 = thunk_FUN_0216e89c(uVar5);
      System_Action_float____ctor_35f1448(uVar5,lVar4,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_Tween__Value_2160f64(param_4,uVar5);
      if (lVar4 != 0) {
                    /* try { // try from 02261664 to 02361667 has its CatchHandler @ 022616b8 */
        *(long *)(lVar4 + 0x18) = *plVar6;
                    /* try { // try from 02261668 to 023616cb has its CatchHandler @ 02261600 */
        thunk_FUN_02134474();
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

