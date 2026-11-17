/* IL2CPP: Dino.BusSand.View.MechanicLayer$$PopIn
void Dino_BusSand_View_MechanicLayer__PopIn (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Transform_o* t, float delay, float dur, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$PopIn
   void Dino_BusSand_View_MechanicLayer__PopIn (Dino_BusSand_View_MechanicLayer_o* __this,
   UnityEngine_Transform_o* t, float delay, float dur, const MethodInfo* method); */

ulong Dino_BusSand_View_MechanicLayer__PopIn_23c2a68
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                long param_5)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_04cbd138;
  uVar10 = param_2;
  if ((bRam0000000004f9c9c5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd140);
    FUN_02132f7c(PTR_DAT_04cbd138);
    bRam0000000004f9c9c5 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass48_0___ctor_23d5638(lVar3,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar3 != 0) {
    plVar8 = (long *)(lVar3 + 0x10);
    *plVar8 = param_5;
    thunk_FUN_02134474(plVar8,param_5);
    lVar7 = *plVar8;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      return uVar4;
    }
    if (*plVar8 != 0) {
      uVar9 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar8,0);
      lVar7 = *(long *)(lVar3 + 0x10);
      *(undefined4 *)(lVar3 + 0x18) = uVar9;
      *(undefined4 *)(lVar3 + 0x1c) = uVar10;
      cVar2 = cRam0000000004f9b65d;
      *(undefined4 *)(lVar3 + 0x20) = param_3;
      if (cVar2 == '\0') {
                    /* try { // try from 024c2b74 to 025c2cb3 has its CatchHandler @ 024c2b74
                       catch() { ... } // from try @ 024c2b74 with catch @ 024c2b74
                       catch() { ... } // from try @ 024c2f9c with catch @ 024c2b74
                       catch() { ... } // from try @ 024c3004 with catch @ 024c2b74
                       catch() { ... } // from try @ 024c304c with catch @ 024c2b74
                       catch() { ... } // from try @ 024c30f8 with catch @ 024c2b74 */
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65d = '\x01';
      }
      if (lVar7 != 0) {
        puVar6 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        UnityEngine_Transform__set_localScale_43d1be0(*puVar6,puVar6[1],puVar6[2],lVar7,0);
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
        System_Action_float____ctor_35f1448(uVar5,lVar3,*(undefined8 *)PTR_DAT_04cbd140,0);
        lVar3 = Dino_BusSand_Tween__Value_238bbfc(param_2,uVar5,0);
        if ((lVar3 != 0) &&
           (uVar4 = Dino_BusSand_Tween__SetDelay_238bb40(param_1,lVar3,0), uVar4 != 0)) {
          *(undefined8 *)(uVar4 + 0x18) = param_4;
          thunk_FUN_02134474((undefined8 *)(uVar4 + 0x18),param_4,0);
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

