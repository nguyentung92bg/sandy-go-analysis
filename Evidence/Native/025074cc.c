/* IL2CPP: Dino.BusSand.View.WorldView$$<ProceduralFrame>g__Bar|41_0
void Dino_BusSand_View_WorldView___ProceduralFrame_g__Bar_41_0 (Dino_BusSand_View_WorldView_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, Dino_BusSand_View_WorldView___c__DisplayClass41_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$<ProceduralFrame>g__Bar|41_0
   void Dino_BusSand_View_WorldView___ProceduralFrame_g__Bar_41_0 (Dino_BusSand_View_WorldView_o*
   __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b,
   Dino_BusSand_View_WorldView___c__DisplayClass41_0_o* , const MethodInfo* method); */

void Dino_BusSand_View_WorldView___ProceduralFrame_g__Bar_41_0_24074cc
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000004f9cb2a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe2c8);
    bRam0000000004f9cb2a = 1;
  }
  puVar1 = PTR_DAT_04cbe2c8;
  if (cRam0000000004f9b65e == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
  lVar2 = Dino_BusSand_View_WorldView__Box_2405ee4
                    ((param_1 + param_4) * 0.5,(param_2 + param_5) * 0.5,(param_3 + param_6) * 0.5,
                     *(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                     *(undefined4 *)(lVar2 + 0x14),param_7,*(undefined8 *)puVar1,
                     *(undefined8 *)(param_8 + 8),1);
  if ((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_transform_43bcd18(lVar2,0), lVar2 != 0)) {
    UnityEngine_Transform__set_localRotation_43d156c
              (*(undefined4 *)(param_8 + 0x10),*(undefined4 *)(param_8 + 0x14),
               *(undefined4 *)(param_8 + 0x18),*(undefined4 *)(param_8 + 0x1c),lVar2,0);
    UnityEngine_Quaternion__Inverse_43aedbc
              (*(undefined4 *)(param_8 + 0x10),*(undefined4 *)(param_8 + 0x14),
               *(undefined4 *)(param_8 + 0x18),*(undefined4 *)(param_8 + 0x1c),0);
    UnityEngine_Quaternion__op_Multiply_43af48c(0);
    if ((bRam0000000004fa8b3e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b3e = 1;
    }
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (pcRam0000000004fa8bf0 == (code *)0x0) {
          pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
        }
        (*pcRam0000000004fa8bf0)(lVar2,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

