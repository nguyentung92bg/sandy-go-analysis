/* IL2CPP: Dino.BusSand.View.GameView$$ScreenOf
UnityEngine_Vector2_o Dino_BusSand_View_GameView__ScreenOf (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$ScreenOf
   UnityEngine_Vector2_o Dino_BusSand_View_GameView__ScreenOf (Dino_BusSand_View_GameView_o* __this,
   int32_t id, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_View_GameView__ScreenOf_23ab508
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c954 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c954 = 1;
  }
  lVar2 = Dino_BusSand_View_GameView__VehicleOf_23ab408(param_4,param_5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
                    /* try { // try from 024ab680 to 025ab6ab has its CatchHandler @ 024ab4ac */
    return ZEXT416(**(uint **)(*(long *)PTR_DAT_04cacfc0 + 0xb8));
  }
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_4 + 0x38);
    lVar2 = UnityEngine_Component__get_transform_43bcd18(lVar2,0);
    if (lVar2 != 0) {
      fVar5 = (float)UnityEngine_Transform__get_position_43d0e48(lVar2,0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      if ((*(long *)(param_4 + 0x30) != 0) && (lVar4 != 0)) {
                    /* try { // try from 024ab5dc to 025ab5e3 has its CatchHandler @ 024ab6c0 */
                    /* try { // try from 024ab5ec to 025ab5f7 has its CatchHandler @ 024ab6b8 */
        fVar8 = *(float *)(*(long *)(param_4 + 0x30) + 0xfc);
                    /* try { // try from 024ab600 to 025ab60f has its CatchHandler @ 024ab6b0 */
        uVar7 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
                    /* try { // try from 024ab61c to 025ab67f has its CatchHandler @ 024ab6b4 */
        param_2 = param_2 + (float)((ulong)uVar7 >> 0x20) * fVar8 * 1.1;
        auVar6 = UnityEngine_Camera__WorldToScreenPoint_435c56c
                           (CONCAT44(param_2,fVar5 + (float)uVar7 * fVar8 * 1.1),param_2,
                            param_3 + *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20)
                                      * fVar8 * _UNK_00e20170,lVar4,0);
        return auVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

