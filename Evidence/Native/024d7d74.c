/* IL2CPP: Dino.BusSand.View.PackVehicle$$Tint
void Dino_BusSand_View_PackVehicle__Tint (Dino_BusSand_View_PackVehicle_o* __this, UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackVehicle$$Tint
   void Dino_BusSand_View_PackVehicle__Tint (Dino_BusSand_View_PackVehicle_o* __this,
   UnityEngine_Color_o main, UnityEngine_Color_o shadow, const MethodInfo* method); */

void Dino_BusSand_View_PackVehicle__Tint_23d7d74
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f9ca2e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa100);
    FUN_02132f7c(PTR_DAT_04caa108);
    bRam0000000004f9ca2e = 1;
  }
                    /* try { // try from 024d7dec to 025d7df7 has its CatchHandler @ 024d7f08 */
  if (*(long *)(param_9 + 0x58) != 0) {
                    /* try { // try from 024d7df8 to 025d7eef has its CatchHandler @ 024d7a2c */
    UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
              (param_1,param_2,param_3,param_4,*(long *)(param_9 + 0x58),
               *(undefined8 *)PTR_DAT_04caa100,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(long *)(param_9 + 0x58) != 0) {
      UnityEngine_MaterialPropertyBlock__SetColor_4372eb4
                (param_5,param_6,param_7,param_8,*(long *)(param_9 + 0x58),
                 *(undefined8 *)PTR_DAT_04caa108,0);
      uVar6 = *(undefined8 *)(param_9 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(param_9 + 0x30);
      if (lVar3 != 0) {
        lVar4 = *(long *)(param_9 + 0x58);
        if ((bRam0000000004fa68bf & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf67a0,lVar4,0);
          bRam0000000004fa68bf = 1;
        }
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar3 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
          }
          uVar6 = 0;
          if (lVar4 != 0) {
            uVar6 = *(undefined8 *)(lVar4 + 0x10);
          }
          if (pcRam0000000004fa6908 == (code *)0x0) {
            pcRam0000000004fa6908 = (code *)FUN_02132f40(&UNK_00e2f2e7);
          }
                    /* WARNING: Could not recover jumptable at 0x04473688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa6908)(lVar5,uVar6);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

