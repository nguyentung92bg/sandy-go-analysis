/* IL2CPP: Dino.BusSand.View.VehicleView$$IntroDrop
void Dino_BusSand_View_VehicleView__IntroDrop (Dino_BusSand_View_VehicleView_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$IntroDrop
   void Dino_BusSand_View_VehicleView__IntroDrop (Dino_BusSand_View_VehicleView_o* __this, float
   delay, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__IntroDrop_23fd64c(undefined4 param_1,long param_2)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar3 = *(long *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x29c) = param_1;
  cVar1 = cRam0000000004f9b65d;
  *(undefined4 *)(param_2 + 0x2a0) = 0;
  if (cVar1 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  puVar2 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
  uStack_2c = *puVar2;
  uStack_28 = puVar2[1];
  uStack_24 = puVar2[2];
  if ((bRam0000000004fa8b3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3e = 1;
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000004fa8bf0 == (code *)0x0) {
        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
      }
      (*pcRam0000000004fa8bf0)(lVar3,&uStack_2c);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

