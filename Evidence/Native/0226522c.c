/* IL2CPP: Dino.BusSand.App.GameApp$$ReleaseThenShow
System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__ReleaseThenShow (Dino_BusSand_App_GameApp_o* __this, System_String_o* what, Dino_BusSand_App_DeviceMemory_Snapshot_o before, System_Action_o* show, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$ReleaseThenShow
   System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__ReleaseThenShow
   (Dino_BusSand_App_GameApp_o* __this, System_String_o* what,
   Dino_BusSand_App_DeviceMemory_Snapshot_o before, System_Action_o* show, const MethodInfo*
   method); */

long Dino_BusSand_App_GameApp__ReleaseThenShow_216522c
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04cac508;
  if ((bRam0000000004f9b855 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac508);
    bRam0000000004f9b855 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp__ReleaseThenShow_d__75___ctor_21719d4(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_2);
    uVar6 = param_3[1];
    uVar5 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    *(undefined8 *)(lVar2 + 0x50) = param_4;
    *(undefined8 *)(lVar2 + 0x38) = uVar6;
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
    *(undefined8 *)(lVar2 + 0x48) = uVar4;
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x50),param_4);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

