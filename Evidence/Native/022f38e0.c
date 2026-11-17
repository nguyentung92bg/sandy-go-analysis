/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$StartFlow
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, System_Collections_Generic_List_object__o* first, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$StartFlow
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow
   (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, System_Collections_Generic_List_object__o*
   first, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow_21f38e0
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb15a0;
  if ((bRam0000000004f9bc30 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb15a0);
    bRam0000000004f9bc30 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow_d__16___ctor_21f3b48(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

