/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$ShowGiftPackImpl
void Dino_BusSand_App_UI_LiveOpsHome__ShowGiftPackImpl (System_Collections_IEnumerator_o** routine, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$ShowGiftPackImpl
   void Dino_BusSand_App_UI_LiveOpsHome__ShowGiftPackImpl (System_Collections_IEnumerator_o**
   routine, const MethodInfo* method); */

void Dino_BusSand_App_UI_LiveOpsHome__ShowGiftPackImpl_2321ea0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f9c5b3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8a90);
    FUN_02132f7c(PTR_DAT_04cb8a98);
    FUN_02132f7c(PTR_DAT_04cb0060);
    bRam0000000004f9c5b3 = 1;
  }
  puVar3 = PTR_DAT_04cb8a98;
  puVar2 = PTR_DAT_04cb8a90;
  puVar1 = PTR_DAT_04cb0060;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  uVar4 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                    (**(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8),*(undefined8 *)puVar3,
                     *(undefined8 *)puVar1,*(undefined8 *)puVar2);
  *param_1 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)param_1 >> 0xc & 0x3f),
                 ((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

