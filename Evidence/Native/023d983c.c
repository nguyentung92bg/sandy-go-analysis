/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$get_Grain
UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__get_Grain (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.AtelierArt$$get_Grain
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_AtelierArt__get_Grain (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_AtelierArt__get_Grain_22d983c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_04cb6f70;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6f70);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3f8 = 1;
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    uVar5 = Dino_BusSand_App_UI_AtelierArt__MakeGrain_22de528();
    puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *puVar4 = uVar5;
    thunk_FUN_02134474(puVar4,uVar5);
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
                    /* try { // try from 023d98bc to 024d9aab has its CatchHandler @ 023d98bc
                       catch() { ... } // from try @ 023d98bc with catch @ 023d98bc
                       catch() { ... } // from try @ 023d9ba0 with catch @ 023d98bc
                       catch() { ... } // from try @ 023d9c48 with catch @ 023d98bc
                       catch() { ... } // from try @ 023d9d4c with catch @ 023d98bc
                       catch() { ... } // from try @ 023d9f50 with catch @ 023d98bc
                       catch() { ... } // from try @ 023d9f60 with catch @ 023d98bc
                       catch() { ... } // from try @ 023d9fe8 with catch @ 023d98bc
                       catch() { ... } // from try @ 023da010 with catch @ 023d98bc
                       catch() { ... } // from try @ 023da034 with catch @ 023d98bc
                       catch() { ... } // from try @ 023da060 with catch @ 023d98bc
                       catch() { ... } // from try @ 023da084 with catch @ 023d98bc
                       catch() { ... } // from try @ 023da0b0 with catch @ 023d98bc */
  }
  return uVar5;
}

