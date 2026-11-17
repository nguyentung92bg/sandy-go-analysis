/* IL2CPP: Dino.BusSand.View.GameView$$CrackleLater
System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__CrackleLater (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector3_o c, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$CrackleLater
   System_Collections_IEnumerator_o* Dino_BusSand_View_GameView__CrackleLater
   (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector3_o c, float delay, const MethodInfo*
   method); */

long Dino_BusSand_View_GameView__CrackleLater_23ab1ac
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc698;
  if ((bRam0000000004f9c94d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc698);
    bRam0000000004f9c94d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_GameView__CrackleLater_d__250___ctor_23ac154(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_5;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_5);
    *(undefined4 *)(lVar2 + 0x30) = param_2;
    *(undefined4 *)(lVar2 + 0x34) = param_3;
    *(undefined4 *)(lVar2 + 0x28) = param_4;
    *(undefined4 *)(lVar2 + 0x2c) = param_1;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

