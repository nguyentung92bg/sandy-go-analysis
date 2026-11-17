/* IL2CPP: Dino.BusSand.View.GameView$$RouteLength
float Dino_BusSand_View_GameView__RouteLength (System_Collections_Generic_List_Vector3__o* r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$RouteLength
   float Dino_BusSand_View_GameView__RouteLength (System_Collections_Generic_List_Vector3__o* r,
   const MethodInfo* method); */

float Dino_BusSand_View_GameView__RouteLength_239ed68
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000004f9c915 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    bRam0000000004f9c915 = 1;
  }
  puVar3 = PTR_DAT_04caa200;
  puVar2 = PTR_DAT_04caa1a8;
  if (param_4 != 0) {
    fVar9 = 0.0;
    if (1 < *(int *)(param_4 + 0x18)) {
      iVar4 = 0;
      do {
        fVar5 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                 (param_4,iVar4,*(undefined8 *)puVar2);
        fVar7 = param_2;
        fVar8 = param_3;
        fVar6 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                 (param_4,iVar4 + 1,*(undefined8 *)puVar2);
                    /* try { // try from 0249ee1c to 0259ee23 has its CatchHandler @ 0249f224 */
        if (cRam0000000004f9b9df == '\0') {
                    /* try { // try from 0249ee2c to 0259ee37 has its CatchHandler @ 0249f220 */
          FUN_02132f7c(puVar3);
          cRam0000000004f9b9df = '\x01';
        }
                    /* try { // try from 0249ee38 to 0259f01b has its CatchHandler @ 0249ebbc */
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar7 = param_2 - fVar7;
        param_3 = param_3 - fVar8;
        iVar1 = iVar4 + 2;
        iVar4 = iVar4 + 1;
        param_2 = param_3 * param_3;
        fVar9 = fVar9 + SQRT(param_2 + (fVar5 - fVar6) * (fVar5 - fVar6) + fVar7 * fVar7);
      } while (iVar1 < *(int *)(param_4 + 0x18));
    }
    return fVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

