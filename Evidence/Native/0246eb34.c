/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Dispose
void Dino_BusSand_Cheat_CheatUiHider__Dispose (Dino_BusSand_Cheat_CheatUiHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Dispose
   void Dino_BusSand_Cheat_CheatUiHider__Dispose (Dino_BusSand_Cheat_CheatUiHider_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatUiHider__Dispose_236eb34(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c7b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbaea8);
    FUN_02132f7c(PTR_DAT_04cbaeb0);
    bRam0000000004f9c7b9 = 1;
  }
  puVar2 = PTR_DAT_04cbaea8;
                    /* try { // try from 0246eb6c to 0256eb8f has its CatchHandler @ 0246ebf0 */
  if (*(char *)(param_1 + 0x4c) != '\0') {
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbaeb0);
    UnityEngine_Canvas_WillRenderCanvases___ctor_468187c(uVar6,param_1,*(undefined8 *)puVar2,0);
    UnityEngine_Canvas__remove_willRenderCanvases_467f144(uVar6,0);
                    /* try { // try from 0246ebac to 0256ebaf has its CatchHandler @ 0246ecd0 */
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  Dino_BusSand_Cheat_CheatUiHider__RestoreGroups_236e998(param_1);
                    /* try { // try from 0246ebc4 to 0256ebc7 has its CatchHandler @ 0246ebf8 */
  if ((bRam0000000004f9c7c1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbaeb8);
    FUN_02132f7c(PTR_DAT_04cbaec0);
    FUN_02132f7c(PTR_DAT_04cbaec8);
    FUN_02132f7c(PTR_DAT_04cbaed0);
    FUN_02132f7c(PTR_DAT_04cbaed8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7c1 = 1;
  }
  puVar4 = PTR_DAT_04cbaec0;
  puVar3 = PTR_DAT_04cbaeb8;
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cbaed8);
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_48,*(undefined8 *)puVar4), lVar7 = lStack_38, (uVar5 & 1) != 0
          ) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar5 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        UnityEngine_Renderer__set_enabled_4373adc(lVar7,1,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)puVar3);
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

