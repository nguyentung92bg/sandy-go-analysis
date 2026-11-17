/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BlobQuad
UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__get_BlobQuad (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$get_BlobQuad
   UnityEngine_Mesh_o* Dino_BusSand_View_VehicleView__get_BlobQuad (const MethodInfo* method); */

undefined8 Dino_BusSand_View_VehicleView__get_BlobQuad_23fb74c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cae3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9cae3 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
}

