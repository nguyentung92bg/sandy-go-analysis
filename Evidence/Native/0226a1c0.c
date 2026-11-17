/* IL2CPP: Dino.BusSand.App.GameApp$$<Awake>b__58_1
void Dino_BusSand_App_GameApp___Awake_b__58_1 (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$<Awake>b__58_1
   void Dino_BusSand_App_GameApp___Awake_b__58_1 (Dino_BusSand_App_GameApp_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp___Awake_b__58_1_216a1c0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  uVar1 = Dino_BusSand_App_UI_UIManager__Create_21fd158(uVar1,0);
  puVar2 = (undefined8 *)(param_1 + 0x28);
  *puVar2 = uVar1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

