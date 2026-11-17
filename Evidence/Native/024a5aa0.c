/* IL2CPP: Dino.BusSand.View.GameView$$OnRoadFull
void Dino_BusSand_View_GameView__OnRoadFull (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$OnRoadFull
   void Dino_BusSand_View_GameView__OnRoadFull (Dino_BusSand_View_GameView_o* __this, int32_t id,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnRoadFull_23a5aa0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lStack_28;
  
  if ((bRam0000000004f9c931 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    bRam0000000004f9c931 = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_1 + 0xe0),param_2,&lStack_28,*(undefined8 *)PTR_DAT_04cbc4b8)
    ;
    if ((uVar2 & 1) != 0) {
      if (lStack_28 == 0) goto LAB_024a5bd4;
      Dino_BusSand_View_VehicleView__Kick_23fd8a0(0xbe800000,0,lStack_28,0);
    }
    puVar1 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_04cab238;
    if (**(long **)(lVar3 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Warning_2382b4c(**(long **)(lVar3 + 0xb8),0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(5);
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    }
    return;
  }
LAB_024a5bd4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

