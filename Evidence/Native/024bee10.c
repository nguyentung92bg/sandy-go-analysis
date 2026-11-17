/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Awake
void Dino_BusSand_View_MechanicLayer__Awake (Dino_BusSand_View_MechanicLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Awake
   void Dino_BusSand_View_MechanicLayer__Awake (Dino_BusSand_View_MechanicLayer_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__Awake_23bee10(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04caa0d8;
  if ((bRam0000000004f9c9bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa0d8);
    bRam0000000004f9c9bf = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_MaterialPropertyBlock___ctor_4372b28(uVar2,0);
  puVar3 = (undefined8 *)(param_1 + 0xb8);
  *puVar3 = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

