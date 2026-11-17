/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ReviveScreen
void Dino_BusSand_App_Meta_GameTracking__ReviveScreen (System_String_o* failBy, int32_t sandLeftPermille, bool suction, int32_t carsLeft, int32_t carsRoad, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ReviveScreen
   void Dino_BusSand_App_Meta_GameTracking__ReviveScreen (System_String_o* failBy, int32_t
   sandLeftPermille, bool suction, int32_t carsLeft, int32_t carsRoad, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__ReviveScreen_2213bec
               (undefined8 param_1,undefined4 param_2,byte param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd47 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9bd47 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  pcVar4 = *(char **)(lVar3 + 0xb8);
  if (*pcVar4 != '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 02313c64 to 02413c6f has its CatchHandler @ 02313e98 */
      thunk_FUN_0218fdac();
      pcVar4 = *(char **)(*(long *)puVar1 + 0xb8);
    }
                    /* try { // try from 02313c70 to 02413d1f has its CatchHandler @ 023139ac */
    *(undefined8 *)(pcVar4 + 0x58) = param_1;
    pcVar4[0x44] = '\x01';
    thunk_FUN_02134474(pcVar4 + 0x58,param_1);
    *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = param_2;
    uVar2 = Dino_BusSand_App_Meta_GameTracking__ItemsCleared_221364c();
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    *(byte *)(lVar3 + 0x45) = param_3 & 1;
    *(undefined4 *)(lVar3 + 0x4c) = uVar2;
    *(undefined4 *)(lVar3 + 0x50) = param_4;
    *(undefined4 *)(lVar3 + 0x54) = param_5;
  }
  return;
}

