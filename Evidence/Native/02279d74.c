/* IL2CPP: Dino.BusSand.App.Privacy$$get_CanShowOptions
bool Dino_BusSand_App_Privacy__get_CanShowOptions (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Privacy$$get_CanShowOptions
   bool Dino_BusSand_App_Privacy__get_CanShowOptions (const MethodInfo* method); */

uint Dino_BusSand_App_Privacy__get_CanShowOptions_2179d74(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cad1e8;
  if ((bRam0000000004f9b8f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad1e8);
    bRam0000000004f9b8f9 = 1;
  }
  lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 02279db0 to 02379db7 has its CatchHandler @ 02279e04 */
                    /* try { // try from 02279db8 to 02379e17 has its CatchHandler @ 02279d64 */
  if ((lVar3 == 0) || ((*(long **)(*(long *)puVar1 + 0xb8))[1] == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
  }
  return uVar2 & 1;
}

