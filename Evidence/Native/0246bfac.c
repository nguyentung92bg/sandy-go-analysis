/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$Refresh
void Dino_BusSand_Cheat_CheatMobilePanel__Refresh (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$Refresh
   void Dino_BusSand_Cheat_CheatMobilePanel__Refresh (Dino_BusSand_Cheat_CheatMobilePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel__Refresh_236bfac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9c79b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbae20);
    FUN_02132f7c(PTR_DAT_04cbae28);
    FUN_02132f7c(PTR_DAT_04cbae30);
    FUN_02132f7c(PTR_DAT_04cbae38);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c79b = 1;
  }
  puVar4 = PTR_DAT_04cbae28;
  puVar3 = PTR_DAT_04cbae20;
  puVar2 = PTR_DAT_04cad330;
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator_39bcbe4
              (&uStack_60,*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cbae38);
    while( true ) {
      do {
        uVar7 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext_35bc4f8
                          (&uStack_60,*(undefined8 *)puVar4);
        lVar6 = lStack_48;
        uVar5 = uStack_50;
        if ((uVar7 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose_35bc4f4
                    (&uStack_60,*(undefined8 *)puVar3);
                    /* try { // try from 0246c0ec to 0256c113 has its CatchHandler @ 0246c2c4 */
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      } while ((uVar7 & 1) == 0);
      if (lVar6 == 0) break;
      uVar8 = (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiKit__SetLabel_228cb44(uVar5,uVar8,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

