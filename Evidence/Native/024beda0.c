/* IL2CPP: Dino.BusSand.View.MechanicLayer$$get_GrainsLive
Dino_BusSand_View_GrainParticles_o* Dino_BusSand_View_MechanicLayer__get_GrainsLive (Dino_BusSand_View_MechanicLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$get_GrainsLive
   Dino_BusSand_View_GrainParticles_o* Dino_BusSand_View_MechanicLayer__get_GrainsLive
   (Dino_BusSand_View_MechanicLayer_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_View_MechanicLayer__get_GrainsLive_23beda0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9be & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9be = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Implicit_43c703c(uVar3,0);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
  }
  return uVar3;
}

