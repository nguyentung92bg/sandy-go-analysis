/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$OnClose
void Dino_BusSand_App_UI_GuidePanel__OnClose (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$OnClose
   void Dino_BusSand_App_UI_GuidePanel__OnClose (Dino_BusSand_App_UI_GuidePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__OnClose_22cd7a8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c38d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c38d = 1;
  }
  Dino_BusSand_App_UI_GuidePanel__RestoreRaised_22cab10(param_1);
  puVar3 = (undefined8 *)(param_1 + 0xb8);
  uVar4 = *puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar4,0);
    *puVar3 = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                   ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

