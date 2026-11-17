/* IL2CPP: Dino.BusSand.App.GameApp$$<Awake>b__58_2
void Dino_BusSand_App_GameApp___Awake_b__58_2 (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$<Awake>b__58_2
   void Dino_BusSand_App_GameApp___Awake_b__58_2 (Dino_BusSand_App_GameApp_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp___Awake_b__58_2_216a1ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04cac868;
  if ((bRam0000000004f9b883 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac868);
    bRam0000000004f9b883 = 1;
  }
  uVar2 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar2 = Dino_BusSand_App_Gameplay_GameplayController__Create_229ca6c(uVar2,0);
  puVar3 = (undefined8 *)(param_1 + 0x20);
  *puVar3 = uVar2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

